#ifndef ASSISTS_H
#define ASSISTS_H

#include <tuple>
#include <iostream>
#include <cstdlib>
#include <ctime>

class Assists {
public:
    static std::tuple<int, int> create_random_location() {
        std::srand(std::time(0));
        int x = std::rand() % 100;
        int y = std::rand() % 100;
        return std::make_tuple(x, y);
    }

    static double evaluate_distance(std::tuple<int, int> loc1, std::tuple<int, int> loc2) {
        int x1 = std::get<0>(loc1);
        int y1 = std::get<1>(loc1);
        int x2 = std::get<0>(loc2);
        int y2 = std::get<1>(loc2);
        return std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));
    }
};

#endif // ASSISTS_H