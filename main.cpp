#include <iostream>
#include <string>
#include "player.h"
#include "monster.h"
#include "location.h"
#include "map.h"

using namespace std;

void UI(Player* player) {
    cout << "Player: " << player->getName() << endl;
    cout << "Health: " << player->getHealth() << endl;
    cout << "Level: " << player->getLevel() << endl;
    cout << "Attack: " << player->getAttack() << endl;
    cout << "Currency: " << player->getCurrency() << endl;
    cout << "Inventory: ";
    for (size_t i = 0; i < player->getInventory().size(); i++) {
        cout << player->getInventory()[i] << " ";
    }
    cout << endl;

}

int main() {

    string input;
    
    cout << "Enter a name for your character: ";
    cin >> input;
    Player* player = new Player(input);

    system("cls");

    UI(player);

    return 0;
}