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
		int randNumber = 1 + rand() % SIZE;

		std::cout << i + 1 << " throw is " << randNumber << std::endl;
        countDice[randNumber - 1]++;


	}

	std::cout << std::endl;

	for (int i{}; i < SIZE; i++) // cout the dropped sides
	{
		std::cout << "Side " << i + 1 << " dropped " << countDice[i] << " times " << std::endl;
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
