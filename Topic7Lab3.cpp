/******************************************
 *  Author : ITHOU MOUSSAVOU FADILE HOLSENE   
 *  Created On : Thu Nov 16 2023
 *  File : Topic7Lab3.cpp
 *******************************************/



#include <iostream>
#include <fstream>
using namespace std;

int randbetween(int min, int max ){
    int randomNumber= rand()% (max-min+1)+min;
    return randomNumber;
}

void fillArray(int arr[], int size, int min, int max){
  
  for (int i = 0; i < size; ++i) {
        arr[i] = randbetween(min, max);
        
    }  
   
} 

   void printArray(int arr[], int size, int numPerLine, ostream& os){
        for (int i = 0; i < size; ++i) {
        os << arr[i] << " ";
        if ((i + 1) % numPerLine == 0 || i == size - 1) {
            os  << endl;
    }
    }
   }

void doubleArray(const int array1[], int array2[], int size) {
    for (int i = 0; i < size; ++i) {
        array2[i] = 2 * array1[i];
    }
}


int main() {
    
    int array1 [40];
    int array2 [40];
    int arraySize = 40;

 fillArray(array1, arraySize, -100, 100);
 printArray(array1, arraySize, 10, cout);
 cout << "This is it for the first array"<< endl;
 doubleArray(array1, array2, arraySize);
 printArray(array2, arraySize, 5, cout);
 cout << "This is it for the second array"<< endl;


    return 0;
}