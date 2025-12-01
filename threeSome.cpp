//
// Created by Xiaoyu Lyu on 01/12/2025.
//

#include "threeSome.h"

#include <ranges>

int threeSome::findTime(std::vector<std::pair<int, int>> girls)
{
    std::vector<std::pair<int, int>> temp;
    for (auto girl : girls)
    {
        temp.push_back({girl.first, 1});
        temp.push_back({girl.second, 0});
    }

    std::ranges::sort(temp.begin(), temp.end(), [](std::pair<int, int> a, std::pair<int, int> b)
    {
        if (a.first == b.first) return a.second < b.second;
        else return a.first < b.first;
    });

    int count = 0;
    int result = 0;
    for (int var : temp | std::views::values)
    {
        if (var == 1) ++count;
        else --count;
        result = std::max(result, count);
    }
    return result;
}
