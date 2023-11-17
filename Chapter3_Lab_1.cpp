//ITHOU MOUSSAVOU FADILE HOLSENE 
//CSC_120
//LAB1, CHAPTER 3


#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    const double width = 5.25;
    const double length = 7.5;
    const double height = 3.0;  
    
    int num_boxes;
    cout << "Enter the number of boxes to make: ";
    cin >> num_boxes;
    
    double wood_3_inch_needed = num_boxes * (2 * width + 2 * length);
    double wood_5_25_inch_needed = num_boxes * length;

    cout << fixed << setprecision(2);
    cout << "Wood needed (3\\ width): " << wood_3_inch_needed << " inches" << endl;
    cout << "Wood needed (5.25\\ width): " << wood_5_25_inch_needed << " inches" << endl;

    return 0;
}/* This program allows you to find the quantity of 3" wood and the quantity of 5.25" wood necessary for the number of boxes entered by a user.*/