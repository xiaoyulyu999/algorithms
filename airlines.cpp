//
// Created by Xiaoyu Lyu on 01/12/2025.
//

#include "airlines.h"

#include <list>
#include <ranges>

int airlines::solution(std::vector<std::pair<int, int>>& airlines)
{
    std::vector<std::pair<int, int>> checkList;

    for (auto airline : airlines)
    {
        checkList.push_back({airline.first, 1});
        checkList.push_back({airline.second, -1});
    }

    std::sort(checkList.begin(), checkList.end(), [](std::pair<int, int> a, std::pair<int, int> b)
    {
        if (a.first == b.first) return a.second < b.second;
        return a.first < b.first;
    });

    int count = 0, result = 0;
    for (const auto val : checkList | std::views::values)
    {
        if (val == 1) count++;
        else count--;
        result = std::max(result, count);
    }

    return result;
}
