//
// Created by Xiaoyu Lyu on 01/12/2025.
//

#include "meetingRoom.h"

#include <ranges>
#include <unordered_map>

int meetingRoom::solution(std::vector<std::pair<int, int>> rooms)
{
    std::vector<std::pair<int, int>> temps;
    for (auto room : rooms)
    {
        temps.push_back({room.first, 1});
        temps.push_back({room.second, 0});
    }

    std::ranges::sort(temps.begin(), temps.end(),[](const auto &a, const auto &b)
    {
        if (a.first == b.first) return a.second < b.second;
        return a.first < b.first;
    });


    int count = 0, result = 0;

    for (const auto val : temps | std::views::values)
    {
        if (val == 1) ++count;
        else --count;
        result = std::max(result, count);
    }

    return result;
}
