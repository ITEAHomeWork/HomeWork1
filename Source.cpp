#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;



int main()
{
	
	const int SIZE = 6;
	int Bones[SIZE] = { 0,0,0,0,0,0 };

	int min = Bones[0];
	int max = Bones[0];
	int Throws;

	cout << "Hi, Enter the number of throws:" << endl;
	cout << " " << endl;

	cin >> Throws;

    cout << "" << endl;

	srand(time(NULL));

	for (int i = 0; i < Throws;i++)
	
	{
		int RandNum = 1 + rand() % 6;
		cout << i + 1 << " Throws is " << RandNum << endl;

		switch (RandNum)
		{
		case 1:
			Bones[RandNum - 1]++;
			break;
		case 2:
			Bones[RandNum - 1]++;
			break;
		case 3:
			Bones[RandNum - 1]++;
			break;
		case 4:
			Bones[RandNum - 1]++;
			break;
		case 5:
			Bones[RandNum - 1]++;
			break;
		case 6:
			Bones[RandNum - 1]++;
			break;
		}
	}
	
	cout << " " << endl;
	cout << "----------------------------------------------------------- " << endl;
	cout << " " << endl;



		return 0;
	}