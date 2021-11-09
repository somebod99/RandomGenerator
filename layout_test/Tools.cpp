#include "Tools.h"
#include <cmath>

double HiPirson(const std::vector<int>& source, const int& power_alphabet)
{
    std::map<int, int> count;

    for (const auto& elem : source)
    {
        ++count[elem];
    }

    int N = source.size();
    double P = 1.0 / power_alphabet;
    double sum = 0.0;

    for (auto it = count.begin(); it != count.end(); ++it)
    {
        sum += pow((double)it->second / N - P, 2) / P;
    }

    return N * sum;
}
