/******************************************
 *  Author : ITHOU MOUSSAVOU FADILE HOLSENE   
 *  Created On : Thu Oct 19 2023
 *  File : Topic5RA2.cpp
 *******************************************/


#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>

using namespace std;


int main() {
//For the while loop
int Number;
cin >> Number;
while (Number <10){

cout << "Please enter a new number"<<endl;
cin >> Number;

}

//For the do while loop
int Number1;
do {
        cout << "Please enter a number greater than 10: ";
    cin >> Number1;
    } while (Number1<= 10);

    cout << Number1;
/*We cannot use a for loop in that case beacause we don't know exactly how many times 
the user will enter wrong number or we usually use a for loop when we know exactly when we are going to loop*/



int main() {
    
    double principal = 300000.0;  
    double annual_interest_rate = 0.04;  
    double monthly_interest_rate = annual_interest_rate / 12.0;
    int loan_term_years = 30;  
    int months = loan_term_years * 12;
    double monthly_payment = principal * (monthly_interest_rate * pow(1 + monthly_interest_rate, months)) / (pow(1 + monthly_interest_rate, months) - 1);

    
    double total_interest_paid = 0.0;

    
    ofstream outputFile("debt.txt");

    if (!outputFile) {
        cerr << "Failed to open the file for writing." << endl;
        return 1;
    }

   
    outputFile << "Month\tMonthly Payment\tPrincipal Payment\tInterest Payment\tRemaining Principal" << endl;

    
    for (int month = 1; month <= months; month++) {
        double interest_payment = principal * monthly_interest_rate;
        double principal_payment = monthly_payment - interest_payment;
        principal -= principal_payment;
        total_interest_paid += interest_payment;

        
        outputFile << month << "\t" << monthly_payment << "\t" << principal_payment << "\t" << interest_payment << "\t" << principal << endl;
    }

    outputFile.close();

    double total_amount_paid = principal + total_interest_paid;
    cout << fixed << setprecision(2);
    cout << "Total Amount Paid: $" << total_amount_paid << endl;
    cout << "Amortization table written to 'debt.txt'" << endl;

    return 0;
}




    return 0;
}