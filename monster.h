#ifndef MONSTER_H
#define MONSTER_H

#include <string>

using namespace std;

class Monster {
    private:
        string name;
        int health;
        int level;
        int attack;
    public:
        Monster(string setName, int setHealth, int setLevel, int setAttack);
        string getName();
        int getHealth();
        int getLevel();
        int getAttack();
        void setHealth(int damage);
};

#endif