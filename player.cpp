#include "player.h"

Player::Player(string setName) {
    name = setName;
    maxHealth = 100;
    health = 100;
    level = 1;
    attack = 10 * log(level) + 10;
    currency = 0;
    xp = 0;
}

string Player::getName() {
    return name;
}

int Player::getMaxHealth() {
    return maxHealth;
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

vector<string> Player::getInventory() {
    return inventory;
}

int Player::getXp() {
    return xp;
}

int Player::getXpToLevelUp() {
    return 100 * pow(2, level - 1);
}

void Player::addXp(int xpAdded) {
    xp += xpAdded;
}

void Player::setHealth(int newHealth) {
    health = newHealth;
}

void Player::setCurrency(int amount) {
    currency = amount;
}

void Player::addToInventory(string item) {
    inventory.push_back(item);
}

void Player::updateStats() {

    while(getXp() >= getXpToLevelUp()) {
        xp = getXp() - getXpToLevelUp();
        level++;
        maxHealth = 100 * log(level) + 100;
        attack = 10 * log(level) + 10;
        health = maxHealth;
    }

}