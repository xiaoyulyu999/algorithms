#include <iostream>

#include "airlines.h"
#include "insertInterval.h"
#include "meetingRoom.h"
#include "mergeIntervals.h"
#include "removeFullOverLap.h"
#include "removeInterval.h"
#include "threeSome.h"


int main()
{
    // AirLine
    // std::vector<std::pair<int, int>> list = {{1, 10},{2, 3},{5, 8}, {4, 7}};
    // int result = airlines::solution(list);

    //girls
    // std::vector<std::pair<int, int>> girls = {{0, 30}, {5, 10}, {15, 20}};
    // int result = threeSome::findTime(girls);
    // std::cout << result << std::endl;

    // Meeting Rooms
    // std::vector<std::pair<int, int>> rooms = {{1, 10}, {2, 7}, {3, 19}, {8, 12}, {10, 20}, {11, 30}};
    // int result = meetingRoom::solution(rooms);
    // std::cout << result << std::endl;

    //Merge over laps
    // std::vector<std::pair<int, int>> intervals = {{1, 3},{2, 6}, {8, 10},{9, 18}};
    // auto result = mergeIntervals::merge(intervals);
    // for (auto interval : result) std::cout << interval.first << ' ' << interval.second << '\n';


    //Insert
    // std::vector<std::pair<int, int>> intervals = {{0, 2}, {3, 4}, {5, 7}};
    // std::pair<int, int> newInterval = {1, 6};
    // auto result = insertInterval::insertNewInterval(intervals, &newInterval);
    // for (auto interval : result) std::cout << interval.first << ' ' << interval.second << '\n';
    //
    // auto res = removeInterval::removeIntervals(&intervals, &newInterval);
    // for (auto interval : res) std::cout << interval.first << ' ' << interval.second << '\n';

    std::vector<std::pair<int, int>> intervals = {{1, 4}, {3, 6}, {2, 8}};
    int result = removeFullCoverSolution(intervals);
    std::cout << result << std::endl;


    return 0;
}
