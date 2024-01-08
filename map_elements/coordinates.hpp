#ifndef __COORDINATES_HPP__
#define __COORDINATES_HPP__

struct Coordinates {
    int x;
    int y;

    bool operator==(const Coordinates& other) const {
        return x == other.x && y == other.y;
    }
};

#endif // __COORDINATES_HPP__