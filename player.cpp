#include "player.h"

Player::Player(string setName) {
    name = setName;
    health = 100;
    level = 1;
    attack = 10;
    currency = 0;
}

string Player::getName() {
    return name;
}

int Player::getHealth() {
    return health;
}

int Player::getLevel() {
    return level;
}

int Player::getAttack() {
    return attack;
}

int Player::getCurrency() {
    return currency;
}

void Player::setCurrency(int amount) {
    currency = amount;
}