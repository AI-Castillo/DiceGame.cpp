#include <iostream>
#include <cmath>
#include <vector>
#include <time.h>
#include <stdlib.h>
#include <cstdlib>
#include <Windows.h>

using namespace std;
    

int diceRoll() {
   
    int Dice = rand() % 6 + 1;
}

void fighting(int health, int ehealth) {

}

int main() {
     srand(time(0)); //using the current time to set a random seed
     int option = 0;
 
    int PlayerHealth = 15;
    int enemyHealth = 15;

    int dice1 = 0;
    int dice2 = 0;
    int diceTotal = 0;

    int enemyDice = 0;
    int enemyDice2 = 0;
    int eDiceTotal = 0;

    int diceDifference = 0;
    
    cout << "A Goblin Approaches, What do you do? " << endl;
    cout << "1. FIGHT!\t2. RUN!" << endl;

    cin >> option;

    if (option == 1) {
         system("cls");
         while (PlayerHealth > 0 || enemyHealth > 0) {

            if (PlayerHealth <= 0) {
                cout << "You Have Died\n\n Game Over" << endl;
                break;
            }
            else if (enemyHealth <= 0) {
                cout << "You Win" << endl;
                break;
            }
        int move = 0;

        
        cout << "Your Health: " << PlayerHealth << endl << "Enemy Health: " << enemyHealth << endl;
        cout << "\n\n1. Punch\t2. Kick\n\n3. Headbutt" << endl;

        cin >> move;

        if (move = 1) {
                system("cls");
                dice1 = diceRoll();
                dice2 = diceRoll();
                enemyDice = diceRoll();
                enemyDice2 = diceRoll();

                diceTotal = dice1 + dice2;
                cout << "You rolled " << dice1 << " + " << dice2 << " = " << diceTotal << endl; 
                eDiceTotal = enemyDice + enemyDice2;
                cout << "They rolled " << enemyDice << " + " << enemyDice2 << " = " << eDiceTotal << endl;
                diceDifference = abs(diceTotal - eDiceTotal);

                

                if (diceTotal > eDiceTotal) {
                    cout << "you have delt " << diceDifference << " damage to the Goblin" << endl;
                    enemyHealth = abs(diceDifference - enemyHealth);
                    continue;
                }
                else if (eDiceTotal > diceTotal) {
                    cout << "enemy has delt " << diceDifference << " damage to you" << endl;
                    PlayerHealth = abs(diceDifference - PlayerHealth);
                    continue;
                }
                else {
                    cout << "Your attacks clash" << endl;
                }
            }
        }
    }
    else if (option == 2) {
        cout << "You chose to run" << endl;
    }
    else if (option == 3) {
        /*
        dice1 = diceRoll();
        Sleep(1);
        dice2 = diceRoll();
        diceTotal = dice1 + dice2;
        cout << dice1 << endl;
        cout << dice2 << endl;
        cout << diceTotal << endl;
        */

    }
    else {
        cout << "Error: Not an option" << endl;
    }

    return 0;
}
