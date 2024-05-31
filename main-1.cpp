#include "Spot.h"
#include "Influence.h"
#include "Assists.h"
#include <iostream>

int main() {
    Spot spot1(Assists::create_random_location(), 'A');
    Spot spot2(Assists::create_random_location(), 'B');

    std::tuple<int, int> loc1 = spot1.get_location();
    std::tuple<int, int> loc2 = spot2.get_location();

    std::cout << "Location 1: (" << std::get<0>(loc1) << ", " << std::get<1>(loc1) << ")" << std::endl;
    std::cout << "Location 2: (" << std::get<0>(loc2) << ", " << std::get<1>(loc2) << ")" << std::endl;
     double distance = Assists::evaluate_distance(loc1, loc2);
    std::cout << "Distance between locations: " << distance << std::endl;

    return 0;
}