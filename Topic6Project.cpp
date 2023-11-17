
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int age = 0; 
    int peopleA = 0; 
    int peopleB = 0;
    int peopleC = 0; 
    int peopleD = 0; 
    int peopleE = 0; 
    int peopleF = 0; 
    int totalpeople = 0; 
    int sumAge = 0;
    int Totalpeople = 0;
    int minpeople = 9999;
    int maxpeople = 0;
    char reason = ' ';
    string otherReason;

    ofstream outFile("ITHOUFadile.txt");

    do {
        cout << "How old are you? (0-110, 888 to end): ";
        cin >> age;
        if (age == 888) {
            break;
        }
        sumAge += age;
        totalpeople++;

        cout << "Why did you come to the park?" << endl;
        cout << "A. To play on the playground." << endl;
        cout << "B. To have my meal." << endl;
        cout << "C. To walk on the beach." << endl;
        cout << "D. To get exercise." << endl;
        cout << "E. To feed the ducks." << endl;
        cout << "F. Other." << endl;
        cout << "Enter your choice (A/B/C/D/E/F): ";
        cin >> reason;
        switch (reason) {
            case 'A':
                peopleA++;
                break;
            case 'B':
                peopleB++;
                break;
            case 'C':
                peopleC++;
                break;
            case 'D':
                peopleD++;
                break;
            case 'E':
                peopleE++;
                break;
            case 'F':
                peopleF++;
                cout << "Please say why : ";
                cin.ignore();
                getline(cin, otherReason);
                outFile << "Other reason: " << otherReason << endl;
                break;
            default:
                cout << "No way" << endl;
        }
    } while (age != 888);

    int avgAge = totalpeople > 0 ? sumAge / totalpeople : 0;
    char leastCommon = 'A', mostCommon = 'A';

    if (peopleA < minpeople) {
         minpeople= peopleA;;
        leastCommon = 'A';
    }
    if (peopleB < minpeople) {
        minpeople = peopleB;
        leastCommon = 'C';
    }
    if (peopleC< minpeople) {
       minpeople = peopleC ;
        leastCommon = 'D';
    }
    if (peopleD < minpeople) {
       minpeople = peopleD;
        leastCommon = 'E';
    }
    if (peopleE < minpeople) {
       minpeople = peopleE;
        leastCommon = 'F';
    }
    if (peopleF > minpeople) {
       minpeople = peopleF;
        mostCommon = 'B';
    }
    if (peopleA > maxpeople) {
        maxpeople = peopleA;
        mostCommon = 'C';
    }
    if (peopleB > maxpeople) {
        maxpeople = peopleB;
        mostCommon = 'D';
    }
    if (peopleC > maxpeople) {
        maxpeople = peopleC;
        mostCommon = 'E';
    }
    if (peopleD > maxpeople) {
        maxpeople = peopleD;
        mostCommon = 'F';
    }
    if (peopleE > maxpeople) {
       maxpeople =peopleE;
        mostCommon = 'F';
    }
    if (peopleF > maxpeople) {
        maxpeople = peopleF;
        mostCommon = 'F';
    }
    
    outFile << "Number of people answered the survey: " << totalpeople << endl;
    outFile << "Number of people answered A: " << peopleA<< " (To play on the playground)" << endl;
    outFile << "Number of people answered B: " << peopleB << " (To have my meal)" << endl;
    outFile << "Number of people answered C: " << peopleC << " (To walk on the beach)" << endl;
    outFile << "Number of people answered D: " << peopleD << " (To get exercise)" << endl;
    outFile << "Number of people answered E: " << peopleE << " (To feed the ducks)" << endl;
    outFile << "Number of people answered F: " << peopleF << " (Other)" << endl;
    outFile << "The average age of park visitors: " << avgAge << endl;
    outFile << "The least common answer: " << leastCommon << endl;
    outFile << "The most common answer: " << mostCommon << endl;

    cout << "Number of people answered the survey: " << totalpeople << endl;
    cout << "Number of people answered A: " << peopleA << " (To play on the playground)" << endl;
    cout << "Number of people answered B: " << peopleB << " (To have my meal)" << endl;
    cout << "Number of people answered C: " << peopleC << " (To walk on the beach)" << endl;
    cout << "Number of people answered D: " << peopleD << " (To get exercise)" << endl;
    cout << "Number of people answered E: " << peopleE << " (To feed the ducks)" << endl;
    cout << "Number of people answered F: " << peopleF<< " (Other)" << endl;
    cout << "The average age of park visitors: " << avgAge << endl;
    cout << "The least common answer: " << leastCommon << endl;
    cout << "The most common answer: " << mostCommon << endl;

    

    outFile.close();
    return 0;
}