//
// Created by Xiaoyu Lyu on 02/12/2025.
//

#include "insertInterval.h"

std::vector<std::pair<int, int>> insertInterval::insertNewInterval(
    std::vector<std::pair<int, int>>& intervals,
    std::pair<int, int>* newInterval)
{
    std::vector<std::pair<int, int>> newIntervals;

    for (auto& current : intervals)
    {
        // Case 1: new interval not started OR current is completely before it
        if (!newInterval || current.second < newInterval->first)
        {
            newIntervals.push_back(current);
        }
        // Case 2: current is completely after newInterval
        else if (current.first > newInterval->second)
        {
            newIntervals.push_back(*newInterval);
            newIntervals.push_back(current);
            newInterval = nullptr;
        }
        // Case 3: overlap ⇒ merge
        else
        {
            newInterval->first  = std::min(newInterval->first,  current.first);
            newInterval->second = std::max(newInterval->second, current.second);
        }
    }

    // If newInterval still exists → push it
    if (newInterval)
        newIntervals.push_back(*newInterval);

    return newIntervals;
}
