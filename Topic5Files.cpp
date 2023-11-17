/******************************************
 *  Author : ITHOU MOUSSAVOU FADILE HOLSENE   
 *  Created On : Fri Oct 13 2023
 *  File : Topic 5 Lab 2.cpp
 *******************************************/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string FADILE = "ITHOUFADILE.txt"; 
    ofstream MyFile(FADILE);

    srand(static_cast<unsigned int>(time(nullptr));

    for (int i = 0; i < 50; i++) {
        int MIN = 1;
        int MAX = 100; 
        int randomNumber = rand() % (MAX - MIN + 1) + MIN;
        cout << randomNumber << endl;
        MyFile << randomNumber << endl;  // Write to the file
    }

    MyFile.close();
    return 0;
}
/******************************************
 *  Author : ITHOU MOUSSAVOU FADILE HOLSENE   
 *  Created On : Fri Oct 13 2023
 *  File : Topic 5 Lab 2.cpp
 *******************************************/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string FADILE = "ITHOUFADILE.txt"; 
    ofstream MyFile(FADILE);

    srand(static_cast<unsigned int>(time(nullptr));

    for (int i = 0; i < 50; i++) {
        int MIN = 1;
        int MAX = 100; 
        int randomNumber = rand() % (MAX - MIN + 1) + MIN;
        cout << randomNumber << endl;
        MyFile << randomNumber << endl;  // Write to the file
    }

    MyFile.close();
    return 0;
}
