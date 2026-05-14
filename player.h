#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>
#include <cmath>

using namespace std;

class Player {
    private: 
        string name;
        int maxHealth;
        int health;
        int level;
        int attack;
        int currency;
        vector<string> inventory;
        int xp;
    public:
        Player(string setName);
        string getName();
        int getMaxHealth();
        int getHealth();
        int getLevel();
        int getAttack();
        int getCurrency();
        int getXp();
        int getXpToLevelUp();
        vector<string> getInventory();
        void addXp(int xpAdded);
        void setHealth(int newHealth);
        void setCurrency(int amount);
        void addToInventory(string item);
        void updateStats();
};

#endif