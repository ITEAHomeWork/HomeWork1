#include <iostream>


int main()
{
	const int SIZE = 6;
	int countDice[SIZE] = { 0, 0, 0, 0, 0, 0 };

	int max = countDice[0];
	int min = countDice[0];

	int indexOfMaxSide = 0;
	int indexOfMinSide = 0;

	int numberOfThrows;

	std::cout << "Enter the number of throws " << std::endl;

	std::cin >> numberOfThrows;

	std::cout << std::endl;


	for (int i = 0; i < numberOfThrows; i++) // Count the value of each array element
	{
		int randNumber = 1 + rand() % 6;

		std::cout << i + 1 << " throw is " << randNumber << std::endl;

		switch (randNumber)
		{
		case 1:
			countDice[randNumber - 1]++;
			break;
		case 2:
			countDice[randNumber - 1]++;
			break;
		case 3:
			countDice[randNumber - 1]++;
			break;
		case 4:
			countDice[randNumber - 1]++;
			break;
		case 5:
			countDice[randNumber - 1]++;
			break;
		case 6:
			countDice[randNumber - 1]++;
			break;
		}
	}

	std::cout << std::endl;

	for (int i = 1; i < 7; i++) // cout the dropped sides
	{
		std::cout << "Side " << i << " dropped " << countDice[i - 1] << " times " << std::endl;
	}

	std::cout << std::endl;

	
	for (int i = 0; i < SIZE; i++)
	{
		if (countDice[i] > countDice[indexOfMaxSide])
		{
			indexOfMaxSide = i;
		}
		if (countDice[i] < countDice[indexOfMinSide])
		{
			indexOfMinSide = i;
		}
	}

	// Output the sides that dropped the most and least
	std::cout << "Side " << indexOfMaxSide + 1 << " dropped the most (" << countDice[indexOfMaxSide] << " times)" << std::endl;
	std::cout << "Side " << indexOfMinSide + 1 << " dropped the least (" << countDice[indexOfMinSide] << " times)" << std::endl;


	
	return 0;
}
