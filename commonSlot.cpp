//
// Created by Xiaoyu Lyu on 04/12/2025.
//

#include "commonSlot.h"

std::pair<int, int> earlestCommon(std::vector<std::pair<int, int>>& workFlow_1, std::vector<std::pair<int, int>>& workFlow_2, int duration)
{
    std::sort(workFlow_1.begin(), workFlow_1.end());
    std::sort(workFlow_2.begin(), workFlow_2.end());

    int i = 0, j = 0;

    while (i < workFlow_1.size() && j < workFlow_2.size())
    {
        int maxStart = std::max(workFlow_1[i].first, workFlow_2[j].first);
        int minEnd = std::min(workFlow_1[i].second, workFlow_2[j].second);

        if (minEnd - maxStart >= duration) return std::pair<int, int>({maxStart, maxStart + duration});
        else if (workFlow_1[i].second < workFlow_2[j].second) ++i;
        else ++j;
    }
    return std::pair<int, int>({});
}