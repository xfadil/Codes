/******************************************
 *  Author : ITHOU MOUSSAVOU FADILE HOLSENE   
 *  Created On : Wed Oct 11 2023
 *  File : Topic Reading Assignment .cpp
 *******************************************/



#include <iostream>
using namespace std;

int main() {

int grade;
cin >> grade;
if (grade >100){
    cout << "Please enter a new grade"<< endl;
    
    cin >> grade;
}

char letterGrade; 

if (grade >=90) {

    letterGrade = 'A';
}
else if (grade >= 80){
    letterGrade = 'B';
}
else if (grade >= 70){
    letterGrade = 'C';
}
else if (grade >=60) {
    letterGrade = 'D';
}
else if (grade < 60) {
    letterGrade = 'F';
}
cout << "Letter Grade: " << letterGrade << endl; 

int qualityPoints;
switch (letterGrade)
{
case 'A':
    qualityPoints = 4;
    break;
case 'B':
    qualityPoints = 3;
break;
case  'C':
     qualityPoints = 2;
break;
case 'D': 
    qualityPoints  = 1;
break;      
default:
    qualityPoints=0;
break;
} 
cout << "Quality Points: " << qualityPoints << endl;



    
    

     return 0;
}