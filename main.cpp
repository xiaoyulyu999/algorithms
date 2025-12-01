#include <iostream>

#include "airlines.h"


int main()
{
    std::vector<std::pair<int, int>> list = {{1, 10},{2, 3},{5, 8}, {4, 7}};
    int result = airlines::solution(list);
    std::cout << result << std::endl;
    return 0;
}
