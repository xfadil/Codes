
/******************************************
 *  Author : ITHOU MOUSSAVOU FADILE HOLSENE   
 *  Created On : Fri Oct 13 2023
 *  File : Topic 5 Lab 2.cpp
 *******************************************/

#include <iostream> 
#include <fstream> 
#include <string> 
#include <cstdlib> // for rand and srand 
#include <ctime> // for time 
 
using namespace std; 
 
int main() { 
    // Create a text file for writing 
    ofstream outputFile("ITHOUFADILE.txt"); 
 
    // Write your name to the file 
    string name = "Sahban Wahid"; 
    outputFile << name << endl; 
 
    // Write random numbers to the file 
    srand(time(0)); // Seed for random number generation 
    for (int i = 0; i < 50; i++) { 
        for (int j = 0; j < 10; j++) { 
            outputFile << setw(3) << rand() % 101 << " "; 
        } 
        outputFile << endl; 
    } 
    outputFile.close(); 
 
    // Open the file for reading 
    ifstream inputFile("SahbanWahid.txt"); 
 
    // Read your name back and display it to the console 
    string readName; 
    getline(inputFile, readName); 
    cout << "Name: " << readName << endl; 
 
    // Read the numbers from the file 
    int number; 
    int smallest = 101; 
    int largest = -1; 
    int total = 0; 
    int count = 0; 
 
    cout << "Numbers: " << endl; 
    while (inputFile >> number) { 
        cout << setw(3) << number << " "; 
        if (number < smallest) { 
            smallest = number; 
        } 
        if (number > largest) { 
            largest = number; 
        } 
        total += number; 
        count++; 
 
        if (count % 2 == 0) { 
            cout << endl; 
        } 
    } 
    inputFile.close(); 
 
    // Display statistics 
    cout << "\nNumber of values read: " << count << endl; 
    cout << "Total: " << total << endl; 
    cout << "Maximum: " << largest << endl; 
    cout << "Minimum: " << smallest << endl; 
    cout << "Average: " << static_cast<double>(total) / count << endl; 
 
    return 0; 
} 