#ifndef MAP_H
#define MAP_H

#include "location.h"
#include <array>

using namespace std;

class Map {
    private:
        Location map[5][5];
    public:
        Map();
        Location getLocation(int x, int y);
        void setLocation(int x, int y, Location location);
};

#endif