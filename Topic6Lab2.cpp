/******************************************
 *  Author : ITHOU MOUSSAVOU FADILE HOLSENE   
 *  Created On : Sat Oct 21 2023
 *  File : Topi6Lab2.cpp
 *******************************************/



#include <iostream>
#include <ctime>
using namespace std;


int findMax(int val1, int val2) {
    if (val1 > val2) {
        return val1;
    } else {
        return val2;
    }
}
double findMax(double val1, double val2){
   if (val1 > val2) {
        return val1;
    } else {
        return val2;
    }
}
int findMin(int val1, int val2) {
    if (val1 > val2) {
        return val2;
    } else {
        return val1;
    }
}

double findMin(double val1, double val2){
if (val1 > val2) {
        return val2;
    } else {
        return val1;
    }
 }
int createrandom() {
    int rand1 = 1;
    int rand2 = 1000;
    int randomNumber = rand() % (rand2 - rand1 + 1) + rand1;
    return randomNumber;
}


int main() {
        int MIN = 1;
        int MAX = 1000; 
        int randomNumber = rand() % (MAX - MIN + 1) + MIN;
        
        cout << randomNumber << endl;
        
      
        int Min= randomNumber;  
        int Max = randomNumber;
        
        int greatervalue;
        int lowervalue;
        for (int i=0; i<9; i++){
        int randomNumber1 = createrandom();
        cout << randomNumber1<< endl;
        greatervalue = findMax(randomNumber1, Max);
        lowervalue = findMin(randomNumber1, Min);

        }
        
        cout << "The greater value is " << greatervalue <<endl;
        cout << "The lower value is " << lowervalue << endl;
    

    return 0;
}