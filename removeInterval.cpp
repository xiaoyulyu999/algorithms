//
// Created by Xiaoyu Lyu on 03/12/2025.
//

#include "removeInterval.h"

std::vector<std::pair<int, int>> removeInterval::removeIntervals(std::vector<std::pair<int, int>>* intervals, std::pair<int, int>* interval)
{
    std::vector<std::pair<int, int>> newIntervals;
    if (intervals == nullptr) return {};
    if (interval == nullptr) return *intervals;

    for (auto& current : *intervals)
    {
        //out of range
        if (current.first >= interval->second || current.second <= interval->first) newIntervals.push_back(current);
        // right overlap
        else if (current.first < interval->first) newIntervals.emplace_back(current.first, interval->first);
        // left ovelap
        else if (current.second > interval->second) newIntervals.emplace_back(interval->second, current.second);
    }
    return newIntervals;
}

