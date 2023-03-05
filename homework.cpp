
#include <cstdlib>
#include <iostream>
#include <map>
#include <time.h>
using namespace std;

int main()
{
    //�������� 1
    srand(time(0));
    setlocale(LC_CTYPE, "ukr");
    map <int, int> resultRolls;
    int n; // ������ ��� ������ ����
    int roll;
    cout << "����i�� �i���i��� ����i� ������ : ";
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
    cout << "����i���� ������ ����� �i� ������� : " << numberMost << endl;
    cout << "�������� ������ ����� �i� ������� : " << numberLeast << endl;

    //�������� 2
    int monthNumber;
    cout << "������ ����� ����� (1-12): " << endl;
    cin >> monthNumber;

    if (monthNumber < 1 || monthNumber > 12) {
        cout << "������� ����� �����!" << endl;
        return 0;
    }

    switch (monthNumber) {
    case 1:
        cout << "ѳ���� �� 31 ����." << endl;
        break;
    case 2:
        cout << "����� �� 28 ��� 29 ���, ������� �� ����." << endl;
        break;
    case 3:
        cout << "�������� �� 31 ����." << endl;
        break;
    case 4:
        cout << "������ �� 30 ���." << endl;
        break;
    case 5:
        cout << "������� �� 31 ����." << endl;
        break;
    case 6:
        cout << "������� �� 30 ���." << endl;
        break;
    case 7:
        cout << "������ �� 31 ����." << endl;
        break;
    case 8:
        cout << "������� �� 31 ����." << endl;
        break;
    case 9:
        cout << "�������� �� 30 ���." << endl;
        break;
    case 10:
        cout << "������� �� 31 ����." << endl;
        break;
    case 11:
        cout << "�������� �� 30 ���." << endl;
        break;
    case 12:
        cout << "������� �� 31 ����." << endl;
        break;
    }

    return 0;
}

