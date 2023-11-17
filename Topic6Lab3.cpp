/******************************************
 *  Author : ITHOU MOUSSAVOU FADILE HOLSENE   
 *  Created On : Sun Oct 22 2023
 *  File : Topic6Lab3.cpp
 *******************************************/

/*what are the input parameters (names and data types) to the function?
The two input parameters are int number1 and int number2.

(what information does the function need to perform it's job?)
The function need the parameters and the code between collibrackets.

what other input parameters (names and data types) does the function need? Why does the function need these?
The function need int sum and int difference, to perform the sum and the difference.

what return type is the function? why?
The return type of this function is void because the function does not directly return the values.

come up with a name for your function
My function name is yesman
*/



#include <iostream>
using namespace std;

void yesman(int& number1, int& number2, int& sum,int& difference){
   sum = number1 + number2;

   difference= number1 - number2;

}



int main() {
int sum;
int difference;
cout << "Please enter a number" << endl;   
int num1;
cin >> num1;
cout << "Please enter a another one"<<endl;
int num2;
cin >> num2;
yesman(num1,num2,sum,difference);
cout << sum << endl;
cout << difference << endl;


    return 0;
}