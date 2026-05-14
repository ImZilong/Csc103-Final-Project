#include <iostream>
#include <string>
#include <unistd.h>
#include <iomanip>
#include "player.h"
#include "monster.h"
#include "location.h"
#include "map.h"

using namespace std;

void UI(Player* player) {

    system("clear");

    usleep(1000);

    player->updateStats();

    cout << "/";

    int bars = static_cast<double> (player->getHealth()) / player->getMaxHealth() * 20;
    for (int i = 0; i < 20; i++) {
        if( i == 10) {
            //set width so size is consistent after changes
            cout << setfill(' ') << setw(3) << player->getHealth() << "/" << player->getMaxHealth();
        }
        if(i < bars) {
            cout << "|";
        }
        else {
            cout << " ";
        }
    }
    cout << "/\n";

    cout << player->getName() << endl;
    cout << "Lvl. " << player->getLevel() << " | XP: " << player->getXp() << "/" << player->getXpToLevelUp() << endl;
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

    UI(player);

    cin >> input;

    while(input != "quit") {
        
        player->addXp(stoi(input));

        UI(player);

        cin >> input;

    }
    

    return 0;
}