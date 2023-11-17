/******************************************
 *  Author : ITHOU MOUSSAVOU FADILE HOLSENE   
 *  Created On : Sun Oct 22 2023
 *  File : Topic6RA2.cpp
 *******************************************/



#include <iostream>
#include <ctime>
using namespace std;

void printNumber(int number){
    cout << number <<endl;

}
int doubleNumber(int number){
    return number*2;
}
double doubleNumber(double number){
    return number*2;
}
void doubleNumber(int& number) {
    number *= 2;}
void printMessage(string message){
    cout << message <<endl;
}
void printMessage(string message, ostream& os){
    os<< message;
}
int getIntValue(int value){
    cin >> value;
    return value;
}
int randBetween(int min, int max){
    int randomNumber = rand() % (max-min+1)+min;
    return randomNumber;
}
double circleArea(double radius){
    double Pi=3.14;
    double area = Pi*radius*radius;
    return area;
}
