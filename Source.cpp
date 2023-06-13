#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;



int main()
{

	const int Size = 6;
	int Bones[Size] = { 0,0,0,0,0,0 };

	int Min = Bones[0];
	int Max = Bones[0];
	int Throws;

	cout << "Hi, Enter the number of throws:" << endl;
	cout << " " << endl;

	cin >> Throws;

	cout << "" << endl;

	srand(time(NULL));

	for (int i = 0; i < Throws; i++)

	{
		int RandNum = 1 + rand() % 6;
		cout << i + 1 << " Throws is " << RandNum << endl;

		Bones[RandNum - 1]++;
			
	
	}

	cout << " " << endl;
	cout << "----------------------------------------------------------- " << endl;
	cout << " " << endl;

	cout << "The smallest number:" << endl;
	for (int i = 0; i < 6; i++) {
		if (Bones[i] == Min) {
			cout << i + 1 << endl;
		}
	}
	
	cout << "The largest number:" << endl;
	for (int i = 0; i < 6; i++) {
		if (Bones[i] == Max) {
			cout << i + 1 << endl;
		}
	}

	return 0;
}