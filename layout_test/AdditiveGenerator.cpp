#include "AdditiveGenerator.h"

AdditiveGenerator::AdditiveGenerator(const int& _power_alphabet, const std::vector<int>& _seed, const std::vector<int>& _lags)
{
    if (_seed.size() < 2)
        throw "Error: incorrect count seeds elements";

    int seed_size = _seed.size();

    if (_lags.size() == 0)
    {
        this->lags = { seed_size, seed_size - 1 };
    }
    else
    {
        if(_lags.size() < 2)
            throw "Error: incorrect count lag coefs";
        if (*std::max_element(_lags.begin(), _lags.end()) != seed_size)
            throw "Error: incorrect lag coefs";

        std::for_each(_lags.begin(), _lags.end(),
            [](const int& coef) { if (coef <= 0) throw "Error: incorrect lag coefs"; });

        this->lags = _lags;
    }

    std::for_each(_seed.begin(), _seed.end(),
        [&_power_alphabet](const int& elem) { if (elem >= _power_alphabet || elem < 0) throw "Error: incorrect seeds element"; });

    this->seed = _seed;
    this->power_alphabet = _power_alphabet;
}

AdditiveGenerator::~AdditiveGenerator()
{
}

unsigned long int AdditiveGenerator::GetPeriod()
{
    unsigned long int T = 0;

    std::vector<int> old_seed = this->seed;

    do
    {
        GetRandomNumber();
        ++T;
    } while (old_seed != this->seed && T < MAX_PERIOD);

    this->seed = old_seed;

    return T;
}

int AdditiveGenerator::GetRandomNumber()
{
    int sum = 0;

    std::for_each(this->lags.begin(), this->lags.end(), [&sum, this](const int& coef) { sum += this->seed[coef - 1]; });

    for (auto it = this->seed.rbegin(); it != this->seed.rend() - 1; ++it)
    {
        *it = *(it + 1);
    }

    this->seed[0] = sum % this->power_alphabet;

    return this->seed[0];
}

int AdditiveGenerator::GetPowerAlphabet()
{
    return this->power_alphabet;
}

CongruentGenerator::CongruentGenerator(const int& _seed, const int& _a, const int& _c, const int& _power_alphabet)
{
    bool check = _seed < 0 || _seed >= _power_alphabet || _a < 0 || _a >= _power_alphabet || _c < 0 || _c >= _power_alphabet;

    if (check)
        throw "Error: incorrect input data";

    this->seed = _seed;
    this->a = _a;
    this->c = _c;
    this->power_alphabet = _power_alphabet;
}

CongruentGenerator::~CongruentGenerator()
{
}

int CongruentGenerator::GetRandomNumber()
{
    this->seed = (this->a * this->seed + this->c) % this->power_alphabet;
    return this->seed;
}

int CongruentGenerator::GetPowerAlphabet()
{
    return this->power_alphabet;
}

LSFR::LSFR(const std::vector<bool>& _seed, const std::vector<int>& _coefs)
    : seed(_seed)
{
    int size = _seed.size();

    for (const auto& coef : _coefs)
    {
        if (coef > size || coef < 1)
            throw "Error: incorrect coefs";
    }

    this->coefs = _coefs;
}

LSFR::~LSFR()
{
}

bool LSFR::GetRandomNumber()
{
    int sum = 0;
    int size = this->seed.size();

    std::for_each(this->coefs.begin(), this->coefs.end(), [&sum, &size, this](const int& coef) { sum += this->seed[size - coef]; });

    bool res = *(this->seed.end() - 1);

    for (auto it = this->seed.rbegin(); it != this->seed.rend() - 1; ++it)
    {
        *it = *(it + 1);
    }

    this->seed[0] = sum % 2;

    return res;
}

int LSFR::GetPowerAlphabet()
{
    return 2;
}
