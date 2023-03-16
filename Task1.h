#pragma once

#include <iostream>
#include <map>
#include <random>
#include <algorithm>

namespace Task1
{
    std::map<int, int> sidesCounter
    {
        {1,0},
        {2,0},
        {3,0},
        {4,0},
        {5,0},
        {6,0}
    };

    using pair_type = decltype(sidesCounter)::value_type;

    void GenerateThrows(int numberOfThrows)
    {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> distr(1, 6);

        for (size_t i = 0; i < numberOfThrows; i++)
            //++sidesCounter[distr(gen)];
            ++sidesCounter[1 + rand() % 6];
    }

    void PrintStatistic()
    {
        for (pair_type side : sidesCounter)
            std::cout << "Side: " << side.first << " Number of throws: " << side.second << std::endl;
    }

    void FindMaxSide()
    {
        std::vector<pair_type> maxElements;
        std::pair<int, int> curMax{ 0,0 };
        for (pair_type p : sidesCounter)
        {
            if (p.second > curMax.second)
            {
                curMax = p;
                maxElements.clear();
                maxElements.push_back(p);
            }
            else if (p.second == curMax.second)
            {
                maxElements.push_back(p);
            }
        }
        for (pair_type p : maxElements)
            std::cout << "Max side: " << p.first << " Number of throws: " << p.second << std::endl;
    }

    void FindMinSide(int numberOfThrows)
    {
        std::vector<pair_type> minElements;
        std::pair<int, int> curMin{ numberOfThrows, numberOfThrows };
        for (pair_type p : sidesCounter)
        {
            if (p.second < curMin.second)
            {
                curMin = p;
                minElements.clear();
                minElements.push_back(p);
            }
            else if (p.second == curMin.second)
            {
                minElements.push_back(p);
            }
        }
        for (pair_type p : minElements)
            std::cout << "Min side: " << p.first << " Number of throws: " << p.second << std::endl;
    }
}