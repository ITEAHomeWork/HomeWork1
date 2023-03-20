
#include <cstdlib>
#include <iostream>
#include <map>
#include <time.h>
using namespace std;

int main()
{
    //Task 1
    srand(time(0));
    setlocale(LC_CTYPE, "ukr");
    map <int, int> resultRolls;
    int n; 
    int roll;
    cout << "Number of attempts : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        roll = rand() % 6;
        resultRolls[roll]++;
    }
    int mostFell = 0;
    int leastFell = INT_MAX;
    int numberMost, numberLeast;
    for (auto x : resultRolls) {
        if (x.second > mostFell) {
            mostFell = x.second;
            numberMost = x.first;
        }
        else if (x.second < leastFell) {
            leastFell = x.second;
            numberLeast = x.first;
        }
    }
    cout << "Most fell  : " << numberMost << endl;
    cout << "Most least : " << numberLeast << endl;

    //Task 2
    int monthNumber;
    cout << "Enter the month number (1-12): " << endl;
    cin >> monthNumber;

    if (monthNumber < 1 || monthNumber > 12) {
        cout << "Number mount!" << endl;
        return 0;
    }

    switch (monthNumber) {
    case 1:
        cout << "January has 31 days." << endl;
        break;
    case 2:
        cout << "February has 28 or 29 days, depending on the year." << endl;
        break;
    case 3:
        cout << "March has 31 days." << endl;
        break;
    case 4:
        cout << "April has 30 days." << endl;
        break;
    case 5:
        cout << "May has 31 days." << endl;
        break;
    case 6:
        cout << "June has 30 days." << endl;
        break;
    case 7:
        cout << "July has 31 days." << endl;
        break;
    case 8:
        cout << "August has 31 days." << endl;
        break;
    case 9:
        cout << "September has 30 days." << endl;
        break;
    case 10:
        cout << "October has 31 days." << endl;
        break;
    case 11:
        cout << "November has 30 days." << endl;
        break;
    case 12:
        cout << "December has 31 days." << endl;
        break;
    }

    return 0;
}

