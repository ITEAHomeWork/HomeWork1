
#include <cstdlib>
#include <iostream>
#include <map>
#include <time.h>
using namespace std;

int main()
{
    //Завдання 1
    srand(time(0));
    setlocale(LC_CTYPE, "ukr");
    map <int, int> resultRolls;
    int n; // Скільки раз кинути кубік
    int roll;
    cout << "Введiть кiлькiсть кидкiв кубика : ";
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
    cout << "Найбiльше випало число пiд номером : " << numberMost << endl;
    cout << "Найменше випало число пiд номером : " << numberLeast << endl;

    //Завдання 2
    int monthNumber;
    cout << "Введіть номер місяця (1-12): " << endl;
    cin >> monthNumber;

    if (monthNumber < 1 || monthNumber > 12) {
        cout << "Невірний номер місяця!" << endl;
        return 0;
    }

    switch (monthNumber) {
    case 1:
        cout << "Січень має 31 день." << endl;
        break;
    case 2:
        cout << "Лютий має 28 або 29 днів, залежно від року." << endl;
        break;
    case 3:
        cout << "Березень має 31 день." << endl;
        break;
    case 4:
        cout << "Квітень має 30 днів." << endl;
        break;
    case 5:
        cout << "Травень має 31 день." << endl;
        break;
    case 6:
        cout << "Червень має 30 днів." << endl;
        break;
    case 7:
        cout << "Липень має 31 день." << endl;
        break;
    case 8:
        cout << "Серпень має 31 день." << endl;
        break;
    case 9:
        cout << "Вересень має 30 днів." << endl;
        break;
    case 10:
        cout << "Жовтень має 31 день." << endl;
        break;
    case 11:
        cout << "Листопад має 30 днів." << endl;
        break;
    case 12:
        cout << "Грудень має 31 день." << endl;
        break;
    }

    return 0;
}

