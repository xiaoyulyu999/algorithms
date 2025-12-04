//
// Created by Xiaoyu Lyu on 03/12/2025.
//
// Give a collection of intervals, find the minimum number of intervals you need to remove to make the rest of the intervals non-overlapping

#include "minNumberRemove.h"
#include <climits>

int minNumberRemove::solution(std::vector<std::pair<int, int>>& intervals)
{
    if (intervals.empty()) return 0;

    std::ranges::sort(intervals, [](const std::pair<int, int>& p1, const std::pair<int, int>& p2)
    {
        if (p1.first == p2.first) return p1.second < p2.second;
        return p1.first < p2.first;
    });

    int count = 0;
    int min = INT_MIN;
    for (const auto [fst, snd] : intervals)
    {
        if (min <= fst) min = snd;
        else count++;
    }
    return count;
}
