#include "monster.h"

Monster::Monster(string setName, int setHealth, int setLevel, int setAttack) {
    name = setName;
    health = setHealth;
    level = setLevel;
    attack = setAttack;
}

string Monster::getName() {
    return name;
}

int Monster::getHealth() {
    return health;
}

int Monster::getLevel() {
    return level;
}

int Monster::getAttack() {
    return attack;
}

void Monster::setHealth(int damage) {
    health -= damage;
}