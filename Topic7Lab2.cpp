/******************************************
 *  Author : ITHOU MOUSSAVOU FADILE HOLSENE   
 *  Created On : Tue Nov 07 2023
 *  File : Topic7Lab2.cpp
 *******************************************/



#include <iostream>
#include <ctime>
using namespace std;

int randbetween(){
    int min = -100;
    int max = 100;
    int randomNumber = rand() % (max - min + 1) + min;
    
    return randomNumber;
}

int main() {
    srand(time(0));
    int number[10]; 

    
    for (int i = 0; i < 10; ++i) {
        number[i] = randbetween();
        
    }
    for (int i = 0; i < 10; ++i) {
        
        cout << number[i] <<endl;
    }

    
    return 0;
}