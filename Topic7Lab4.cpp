/******************************************
 *  Author : ITHOU MOUSSAVOU FADILE HOLSENE   
 *  Created On : Thu Nov 16 2023
 *  File : Topic7Lab4.cpp
 *******************************************/



#include <iostream>
using namespace std;

int randbetween(int min, int max ){
    min = -100;
    max = 100;
    int randomNumber= rand()% (max-min+1)+min;
    return randomNumber;
}
void fillArray(int array[], int size){
for (int i = 0; i < size; ++i) {
    int min = -100;
    int max = 100;
    array[i] = randbetween(min, max);
        
    }  
}
void printArray(const int array[], int size) {
    for (int i = 0; i < size; ++i) {
    cout << array[i] << " ";
    }
     cout << endl;
}
    
void addArrays(const int arr1[], const int arr2[], int arr3[], int size){
    for (int i = 0; i < size; ++i) {
        arr3[i] = arr1[i] + arr2[i];
    }
}

int main() {
int size = 10;
int array1[size];
int array2[size];
int array3[size];
fillArray (array1, size);
fillArray (array2, size);
addArrays(array1, array2, array3, size);
printArray(array1, size);
printArray(array2, size);
printArray(array3, size);

    return 0;
}