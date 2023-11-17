/******************************************
 *  Author: ITHOU MOUSSAVOU FADILE HOLSENE
 *  Created On: Wed Oct 11 2023
 *  File: Topic 4 reading assignment 2.cpp
 *******************************************/

#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
    using namespace std;

    srand(static_cast<unsigned int>(time(nullptr)));

    int me = rand() % 8 + 1;
    int MEGATRON = rand() % 8 + 1;
    
    cout << "I roll " << me << endl;
    cout << "MEGATRON ROLLS " << MEGATRON << endl;

    int firstPlayer;
    if (me < MEGATRON) {
        cout << "MEGATRON goes first" << endl;
        firstPlayer = 2; 
    } else if (MEGATRON < me) {
        cout << "I go first" << endl;
        firstPlayer = 1; 
    } else {
        cout << "Please reroll" << endl;
        return 0;
    }

    int sumMe = 0;
    int sumMEGATRON = 0;

    for (int turn = 0; turn < 2; ++turn) {
        if (firstPlayer == 1) {
            cout << "My turn " << (turn + 1) << ": Enter 1 for one die, 2 for two dice, or 0 to end the turn (pass): ";
            int dice;
            cin >> dice;
            if (dice == 1) {
                int roll = rand() % 8 + 1;
                sumMe += roll;
                cout << "I rolled " << roll << ". Your total score is " << sumMe << endl;
            } else if (dice == 2) {
                int roll1 = rand() % 8 + 1;
                   int roll2 = rand() % 8 + 1;
                  sumMe += roll1 + roll2;
                cout << "I rolled " << roll1 << " and " << roll2 << ". My total score is " << sumMe << endl;
            } else if (dice == 0) {
                              cout << "I chose to end your turn. My total score is " << sumMe << endl;
                break;
            } else {
                   cout << "Invalid input. Please enter 1 for one die, 2 for two dice, or 0 to end your turn (pass)." << endl;
                
            }

            if (sumMe > 15) {
                cout << "I went over 15 points. I lose!" << endl;
                return 0;
            }
        } else {
            cout << "MEGATRON's turn " << (turn + 1)<< ": ";
            int dice = rand() % 2 + 1; 
            if (dice == 1) {
                int roll = rand() % 8 + 1;
                sumMEGATRON += roll;
                cout << "MEGATRON rolled " << roll << ". MEGATRON's total score is " << sumMEGATRON << endl;
            } else{
                int roll1 = rand() % 8 + 1;
                int roll2 = rand() % 8 + 1;
                sumMEGATRON += roll1 + roll2;
                cout << "MEGATRON rolled " << roll1 << " and " << roll2 << ". MEGATRON's total score is " << sumMEGATRON << endl;
              }

            if (sumMEGATRON > 15) {
                cout << "MEGATRON went over 15 points. I win!" << endl;
                return 0;
                     }
        }
    }

    
    if (sumMe > 15 && sumMEGATRON > 15  ) {
        cout << "Both players went over 15 points. It's a draw!" << endl;
    } else if (sumMe <= 15 && sumMEGATRON <= 15) {
        if (15 - sumMe < 15 - sumMEGATRON) {
            cout << "You win! You are closer to 15 points." << endl;
        } else if (15 - sumMEGATRON < 15 - sumMe) {
            cout << "MEGATRON wins! MEGATRON is closer to 15 points." << endl;
        } else {
            cout << "It's a draw! Both players are equally close to 15 points." <<endl;
        }
    } else if (  sumMe <= 15) {
        cout <<"   You win! MEGATRON went over 15 points." << endl;
    } else {
        cout << "MEGATRON wins! You went over 15 points." <<  endl;
    }

    return 0;
}
