#ifndef LOCATION_H
#define LOCATION_H

#include <string>
#include <vector>

using namespace std;

class Location {
    private:
        string name;
        string description;
        vector<Location*> Options;
    public:
        Location();
        Location(string setName, string setDescription);
        string getName();
        string getDescription();
        void addOption(Location* option);
        void printOptions();
};

#endif