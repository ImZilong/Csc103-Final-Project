#ifndef MONSTERS_H
#define MONSTERS_H

#include <string>

using namespace std;

class monsters {
    private:
        string name;
        int health;
        int level;
        int attack;
    public:
        monsters(string setName, int setHealth, int setLevel, int setAttack);
        string getName();
        int getHealth();
        int getLevel();
        int getAttack();
};

#endif