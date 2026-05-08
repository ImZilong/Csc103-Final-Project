#ifndef LOCATION_H
#define LOCATION_H

#include <string>

using namespace std;

class Location {
    private:
        string name;
        string description;
    public:
        Location(string setName, string setDescription);
        string getName();
        string getDescription();
};

#endif