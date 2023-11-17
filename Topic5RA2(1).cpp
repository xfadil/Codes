/******************************************
 *  Author : ITHOU MOUSSAVOU FADILE HOLSENE   
 *  Created On : Thu Oct 19 2023
 *  File : Topic5RA2.cpp
 *******************************************/


#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>

using namespace std;


int main() {
//For the do while loop
int Number1;
do {
        cout << "Please enter a number greater than 10: ";
    cin >> Number1;
    } while (Number1<= 10);

    cout << Number1;
/*We cannot use a for loop in that case beacause we don't know exactly how many times 
the user will enter wrong number or we usually use a for loop when we know exactly when we are going to loop*/



    return 0;
}