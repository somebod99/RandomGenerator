#ifndef TOOLS_H
#define TOOLS_H

#include <algorithm>
#include <iostream>
#include <vector>
#include <map>

double HiPirson(const std::vector<int>& source, const int& power_alphabet);

template<class T>
void PrintSequence(const std::vector<T>& seq)
{
    std::for_each(seq.begin(), seq.end(), [](const int& x) { std::cout << x << ' '; });
    std::cout << '\n';
}

#endif // TOOLS_H
