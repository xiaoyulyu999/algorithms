//
// Created by Xiaoyu Lyu on 02/12/2025.
//

#include "mergeIntervals.h"

std::vector<std::pair<int, int>> mergeIntervals::merge(std::vector<std::pair<int, int>>& intervals)
{
    std::vector<std::pair<int, int>> temps;

    std::ranges::sort(intervals, [](const auto& a, const auto& b)
    {
        if (a.first == b.first) return a.second < b.second;
        return a.first < b.first;
    });

    std::pair<int, int> cur = intervals[0];
    for (auto& next : intervals)
    {
        if (cur.second >= next.first) cur.second = std::max(cur.second, next.second);
        else temps.push_back(cur), cur = next;
    }
    temps.push_back(cur);
    return temps;
}
