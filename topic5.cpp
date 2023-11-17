/******************************************
 *  Author : ITHOU MOUSSAVOU FADILE HOLSENE   
 *  Created On : Wed Oct 11 2023
 *  File : Topic Reading Assignment .cpp
 *******************************************/


#include <iostream>
using namespace std;

int main() {
    int students=0;
    int textbooks = 0;
    int studentstype;
    


    while (true){
        cout << "Please enter the number of textbook(s) you buyed :"<<endl;
        cin >> studentstype;
        if (studentstype == -999 ){
            break;
        }
        
    
    if (studentstype >=0 && studentstype <=50){
        students++;
        textbooks += studentstype;

    }
    else {
        cout << "error"<<endl;
    }
    }


  if (students > 0) {
        int average = textbooks / students;
        cout << "Total of students: " << students << endl;
        cout << "Total of textbooks: " << textbooks << endl;
        cout << "Average of textbooks per student: " << average << endl;
    } else {
        cout << "error" << endl;
    }

    




    return 0;
}