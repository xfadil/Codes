/******************************************
 *  Author: ITHOU MOUSSAVOU FADILE HOLSENE   
 *  Created On: Fri Oct 13 2023
 *  File: Topic 4 Lab 1.cpp
 *******************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));

    int SecretNumber = rand() % 100 + 1;
    string FullName;
    cout << "Please enter your full name: ";
    getline(cin, FullName);

    bool flag = true;
    int guesses = 0;

    do {
        guesses++;
        cout << "Please enter a number between 1 and 100: ";
        int i;
        cin >> i;

        if (i == 100 || i < 1) {
            cout << "Invalid answer" << endl;
        } else {
            if (i == SecretNumber) {
                cout << "You guessed right" << endl;
                cout << "Number of guesses: " << guesses << endl;
                flag = false;
            } else {
                if (i > SecretNumber) {
                    cout << "Too high! Try again." << endl;
                } else {
                    cout << "Too low! Try again." << endl;
                }
            }
        }
    } while (flag);

    return 0;
}
