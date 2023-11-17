//LAB 5 Ithou Moussavou 
//Date: 4:25
// This code give the average of 5,7,1 and also the reminder of 5/7, 1/5 and 1/7
#include <iostream>
using namespace std;

int main()
{
int x = 7;
int y = 5;
int z = 1; 
float average = (x+y+z)/3.0;
cout << average << endl;

int mod;

mod = 1%5;
cout << mod << endl;
mod = 1%7;
cout << mod << endl;
mod = 5%7 ;
cout << mod << endl;


return 0;
}

