/******************************************
 *  Author : ITHOU MOUSSAVOU FADILE HOLSENE   
 *  Created On : Sun Oct 22 2023
 *  File : Topic6Lab1.cpp
 *******************************************/



#include <iostream>

using namespace std;
void prompt(string message){
    cout << message <<endl;
}
int getInt(string message){
    prompt(message);
    int number;
    cin >> number;
    return number;
}
int sumNumbers(int start, int end){
    int sum =0;
    for ( int number = start; number< end ;number++  ){
    sum += number;
    }
    return sum;
}
int main() {
    

    int start = getInt("Please enter a start number");
    int end = getInt("Please enter a end number");
    int result = sumNumbers(start, end);
    cout << "the sum of the numbers between "<< start << " and "<< end << " is "<< result << endl;


    return 0;
}