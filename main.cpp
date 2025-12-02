#include <iostream>

#include "airlines.h"
#include "meetingRoom.h"
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
    std::vector<std::pair<int, int>> rooms = {{1, 10}, {2, 7}, {3, 19}, {8, 12}, {10, 20}, {11, 30}};
    int result = meetingRoom::solution(rooms);
    std::cout << result << std::endl;
    return 0;
}
