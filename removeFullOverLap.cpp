//
// Created by Xiaoyu Lyu on 04/12/2025.
//

#include "removeFullOverLap.h"

int removeFullCoverSolution(std::vector<std::pair<int, int>> &intervals)
{
    std::ranges::sort(intervals, [](auto & a, auto & b)
    {
        if (a.first == b.first) return a.second < b.second;
        return a.first < b.first;
    });

    int count = 0, temp = INT_MIN;

    for (auto& [fir, sec] : intervals)
    {
        if (temp < sec) count++, temp =sec;
    }

    return count;
}