#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>

using namespace std;

class Player {
    private: 
        string name;
        int health;
        int level;
        int attack;
        int currency;
        vector<string> inventory;
    public:
        Player(string setName);
        string getName();
        int getHealth();
        int getLevel();
        int getAttack();
        int getCurrency();
        vector<string> getInventory();
        void setCurrency(int amount);
        void addToInventory(string item);
};

#endif