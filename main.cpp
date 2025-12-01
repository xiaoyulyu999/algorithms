#include <iostream>

#include "airlines.h"
#include "threeSome.h"


int main()
{
    // AirLine
    // std::vector<std::pair<int, int>> list = {{1, 10},{2, 3},{5, 8}, {4, 7}};
    // int result = airlines::solution(list);

    //girls
    std::vector<std::pair<int, int>> girls = {{0, 30}, {5, 10}, {15, 20}};
    int result = threeSome::findTime(girls);
    std::cout << result << std::endl;
    return 0;
}
