#include "location.h"
#include <iostream>
using namespace std;

Location::Location() {
    name = "null";
    description = "";
}

Location::Location(string setName, string setDescription) {
    name = setName;
    description = setDescription;
}

string Location::getName() {
    return name;
}

string Location::getDescription() {
    return description;
}

void Location::addOption(Location* option) {
    Options.push_back(option);
}

void Location::printOptions() {
    for (size_t i = 0; i < Options.size(); i++) {
        cout << static_cast<char> (141 + i) << ". " << Options[i]->getName() << endl;
    }
}