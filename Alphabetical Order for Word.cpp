/******************************************
 *  Author : ITHOU MOUSSAVOU FADILE HOLSENE   
 *  Created On : Thu Oct 19 2023
 *  File : Alphabetical Order for Word.cpp
 *******************************************/



#include <iostream>


using namespace std;

int main() {
    string word1;   
    string word2;
    string word3;
    string temp;

    cout << "Enter the first word: ";
    cin >> word1;
    cout << "Enter the second word: ";
    cin >> word2;
    cout << "Enter the third word: ";
    cin >> word3;


    if (word1 > word2) {
        temp = word1;
        word1 = word2;
        word2 = temp;
    }
    if (word2 > word3) {
        temp = word2;
        word2 = word3;
        word3 = temp;
    }
    if (word1 > word2) {
        temp = word1;
        word1 = word2;
        word2 = temp;
    }

    cout << "In alphabetical order a:we have" << word1 << ", " << word2 << ", " << word3 << endl;

    return 0;
}
