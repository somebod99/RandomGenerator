#ifndef ADDITIVEGENERATOR_H
#define ADDITIVEGENERATOR_H

#include <vector>
#include <algorithm>

class RandomGenerator
{
public:
    virtual ~RandomGenerator() {}

    virtual int GetRandomNumber() = 0;
    virtual int GetPowerAlphabet() = 0;

    std::vector<int> GetRandomSequence(const int& n);
};

class AdditiveGenerator : public RandomGenerator
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

class CongruentGenerator : public RandomGenerator
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

#endif // ADDITIVEGENERATOR_H
