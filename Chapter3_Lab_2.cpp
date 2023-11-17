#include <iostream>
#include <ctime>  
#include <cstdlib> 

using namespace std; 
int main() {
    
    srand(static_cast<unsigned int>(time(nullptr)));
    int secretNumber = rand() % 10+1;
    
    string fullName;
    cout << "Please enter your full name"<<endl;
    getline (cin, fullName);
    
    cout << "Please enter a number between 1 and 10" << endl;
    int firstNumber;
    cin >> firstNumber;
    
    
    
    
    if (firstNumber>10){
        cout << "That it is an unacceptable number"<<endl;
        cout << "Please enter a number between 1 and 10" << endl;
        int newNumber1;
        cin >> newNumber1;
    }else if (firstNumber<1){cout << "That it is an unacceptable number"<<endl;
        cout << "Please enter a number between 1 and 10" << endl;
        int newNumber2;
        cin >> newNumber2;}
        
    
    cout << fullName; 
    if (newNumber1 >secretNumber){
        cout <<",too high"<< endl;
        cout <<"the secret number is "<< secretNumber;
    }else if(newNumber1 <secretNumber){
        cout <<",too low"<< endl;
        cout <<"the secret number is "<< secretNumber;
         } 
    else (newNumber1 ==secretNumber);{
        cout << ",you guessed it!"<< endl;}

   
   cout << fullName; 
    if (newNumber2 >secretNumber){
        cout <<",too high"<< endl;
        cout <<"the secret number is "<< secretNumber;
    }else if(newNumber2 <secretNumber){
        cout <<",too low"<< endl;
        cout <<"the secret number is "<< secretNumber;
         } 
    else (newNumber2 ==secretNumber);{
        cout << ",you guessed it!"<< endl;}
         
    
    

    

    return 0;
}

