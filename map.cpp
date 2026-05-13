#include "map.h"

Map::Map() {
    // Initialize the map with default locations
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            map[i][j] = Location();
        }
    }
}

Location Map::getLocation(int x, int y) {
    if (x >= 0 && x < 5 && y >= 0 && y < 5) {
        return map[x][y];
    } else {
        // Return a default location if out of bounds
        return Location();
    }
}

void Map::setLocation(int x, int y, Location location) {
    if (x >= 0 && x < 5 && y >= 0 && y < 5) {
        map[x][y] = location;
    }
}