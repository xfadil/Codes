#include <iostream>  // Required for cin, cout and other.
#include <string>    // Required for using a string 
using namespace std;
int main() {
    // Declare a string variable to store user input
    string userInput;

    // Prompt the user for input
    cout << "Please enter a string: ";

    // Read input from the console into the string variable
    getline(cin, userInput);

    // Print the user's input to the console
    cout << "You entered: " << userInput << endl;

    return 0;  // Return 0 to indicate successful completion
}

