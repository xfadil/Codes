/******************************************
 *  Author : ITHOU MOUSSAVOU FADILE HOLSENE   
 *  Created On : Sat Nov 04 2023
 *  File : Topic7Lab1.cpp
 *******************************************/



#include <iostream>
using namespace std;

int main() {
    int number[10]; 

    
    for (int i = 0; i < 10; ++i) {
        number[i] = i + 1;
    }

    cout << number[1] << endl; 
    cout << number[3] << endl; 
    cout << number[9]<< endl; 

    return 0;
}
