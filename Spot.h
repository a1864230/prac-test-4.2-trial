#ifndef SPOT_H
#define SPOT_H

#include <tuple>
#include <string>

class Spot {
private:
    std::tuple<int, int> location;
    char category;

public:
    Spot(std::tuple<int, int> loc, char cat) : location(loc), category(cat) {}
    Spot() : location(std::make_tuple(0, 0)), category(' ') {}

    std::tuple<int, int> get_location() { return location; }
    void set_location(std::tuple<int, int> loc) { location = loc; }

    char get_category() { return category; }
    void set_category(char cat) { category = cat; }
};

#endif // SPOT_H