#ifndef ADDITIVEGENERATOR_H
#define ADDITIVEGENERATOR_H

#include <vector>
#include <algorithm>

constexpr unsigned int MAX_PERIOD = 100000;

template<class T>
class RandomGenerator
{
public:
    virtual ~RandomGenerator() {}

    virtual T GetRandomNumber() = 0;
    virtual int GetPowerAlphabet() = 0;

    std::vector<T> GetRandomSequence(const int& n);
};

template<class T>
std::vector<T> RandomGenerator<T>::GetRandomSequence(const int& n)
{
    std::vector<T> res(n);

    for (auto it = res.begin(); it != res.end(); ++it)
    {
        *it = this->GetRandomNumber();
    }

    return res;
}

class AdditiveGenerator : public RandomGenerator<int>
{
public:
    AdditiveGenerator(const int& _power_alphabet, const std::vector<int>& _seed, const std::vector<int>& _lags = {});
    ~AdditiveGenerator();

    unsigned long int GetPeriod();

    virtual int GetRandomNumber();
    virtual int GetPowerAlphabet();

private:
    int power_alphabet;
    std::vector<int> seed;
    std::vector<int> lags;
};

class CongruentGenerator : public RandomGenerator<int>
{
public:
    CongruentGenerator(const int& _seed, const int& _a, const int& _c, const int& _power_alphabet);
    ~CongruentGenerator();

    virtual int GetRandomNumber();
    virtual int GetPowerAlphabet();

private:
    int seed;
    int a;
    int c;
    int power_alphabet;
};

class LSFR : public RandomGenerator<bool>
{
public:
    LSFR(const std::vector<bool>& _seed, const std::vector<int>& _coefs);
    ~LSFR();

    virtual bool GetRandomNumber();
    virtual int GetPowerAlphabet();

private:
    std::vector<bool> seed;
    std::vector<int> coefs;
};

#endif // ADDITIVEGENERATOR_H
