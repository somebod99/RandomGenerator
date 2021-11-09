#include "AdditiveGenerator.h"

std::vector<int> RandomGenerator::GetRandomSequence(const int& n)
{
    std::vector<int> res(n);

    for (int& elem : res)
    {
        elem = this->GetRandomNumber();
    }

    return res;
}

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
        if (*std::max_element(_lags.begin(), _lags.end()) != seed_size)
            throw "Error: incorrect lag coefficients";

        std::for_each(_lags.begin(), _lags.end(),
            [](const int& coef) { if (coef <= 0) throw "Error: incorrect lag coefficients"; });

        this->lags = _lags;
    }

    std::for_each(_seed.begin(), _seed.end(),
        [&_power_alphabet](const int& elem) { if (elem >= _power_alphabet || elem < 0) throw "Error: incorrect input sequence"; });

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
    } while (old_seed != this->seed);

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
