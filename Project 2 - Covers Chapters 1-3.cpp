/******************************************
 *  Author : ITHOU MOUSSAVOU FADILE HOLSENE   
 *  Created On : Thu Oct 12 2023
 *  File : Project 2 - Covers Chapters 1-3.cpp
 *******************************************/



#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    string userFullName;
    cout << "Please enter your full name: ";
    cin >> userFullName;
    getline(cin, userFullName);
    

    double totalTrashCollected = 0;
double totalMoneyGenerated = 0;
    
 
 double trashCollected;

cout << "Pounds of trash collected on day 1: ";
    cin >> trashCollected;
    totalTrashCollected += trashCollected;
    totalMoneyGenerated += trashCollected * 0.28; 

cout << "Pounds of trash collected on day 2: ";
    cin >> trashCollected;
    totalTrashCollected += trashCollected;
    totalMoneyGenerated += trashCollected * 0.28;

cout << "Pounds of trash collected on day 3: ";
    cin >> trashCollected;
    totalTrashCollected += trashCollected;
    totalMoneyGenerated += trashCollected * 0.28;

cout << "Pounds of trash collected on day 4: ";
    cin >> trashCollected;
    totalTrashCollected += trashCollected;
    totalMoneyGenerated += trashCollected * 0.28;

cout << "Pounds of trash collected on day 5: ";
    cin >> trashCollected;
    totalTrashCollected += trashCollected;
    totalMoneyGenerated += trashCollected * 0.28;

cout << "Pounds of trash collected on day 6: ";
    cin >> trashCollected;
    totalTrashCollected += trashCollected;
    totalMoneyGenerated += trashCollected * 0.28;

cout << "Pounds of trash collected on day 7: ";
    cin >> trashCollected;
    totalTrashCollected += trashCollected;
    totalMoneyGenerated += trashCollected * 0.28;

cout << "Pounds of trash collected on day 8: ";
    cin >> trashCollected;
    totalTrashCollected += trashCollected;
    totalMoneyGenerated += trashCollected * 0.28;

cout << "Pounds of trash collected on day 9: ";
    cin >> trashCollected;
    totalTrashCollected += trashCollected;
    totalMoneyGenerated += trashCollected * 0.28;

cout << "Pounds of trash collected on day 10: ";
    cin >> trashCollected;
    totalTrashCollected += trashCollected;
    totalMoneyGenerated += trashCollected * 0.28;

cout << "Pounds of trash collected on day 11: ";
    cin >> trashCollected;
    totalTrashCollected += trashCollected;
    totalMoneyGenerated += trashCollected * 0.28;

cout << "Pounds of trash collected on day 12: ";
    cin >> trashCollected;
    totalTrashCollected += trashCollected;
    totalMoneyGenerated += trashCollected * 0.28;

cout << "Pounds of trash collected on day 12: ";
    cin >> trashCollected;
    totalTrashCollected += trashCollected;
    totalMoneyGenerated += trashCollected * 0.28;

cout << "Pounds of trash collected on day 14: ";
    cin >> trashCollected;
    totalTrashCollected += trashCollected;
    totalMoneyGenerated += trashCollected * 0.28;
                                                

    int averageMoneyPerDay = totalMoneyGenerated /14; 
    int benchesCreated = totalMoneyGenerated/18.85;
    int remainingTrashForIncompleteBench = (benchesCreated+1) *18.85- totalMoneyGenerated ;
        



   cout << "Full Name: " << userFullName << endl;
    cout << "Total trash collected: " << totalTrashCollected << " lbs" << endl;
    cout << fixed << setprecision(2) << "Total money generated: $" << totalMoneyGenerated << endl;

    cout << "Average money raised per day: $" << averageMoneyPerDay << endl;
    cout << "Benches created: " << benchesCreated << endl;
    cout << "Remaining trash needed for an incomplete bench: " << remainingTrashForIncompleteBench << " lbs" << endl;     

    
            





    return 0;
}