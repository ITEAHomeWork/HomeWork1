#include <iostream>
#include <string>

/*
	ENGLISH VERSION COMMENT.
	==================================================================================
	Using a random number generator, write a program that throws a toss glans (1 - 6).
	Make the number of throws that was entered into the console and count the numbers
	of drops of each side. Output the result to the console.
	Output the sides that fell more and less.
	==================================================================================
*/

int main()
{
	int countOfThrow{};
	const int size = 6;

	int count[size]{ 0, 0, 0, 0, 0, 0 };
	int number[size]{ 1, 2, 3, 4, 5, 6 };

	int max_count = count[0];
	int min_count = count[0];

	std::string indexNumber[]{ "First", "Second", "Third", "Fourth", "Fifth", "Sixth" };

	std::cout << "Input count of throw (1 to 6): ";
	std::cin >> countOfThrow;

	for (int newThrow{ 0 }; newThrow < countOfThrow; newThrow++)
	{
		number[newThrow] = rand() % size + 1;

		count[rand() % 6]++;
	}

	std::cout << std::endl;
	std::cout << "Count of throw of each sides:\n";
	std::cout << std::endl;

	/* a variable which outputed the sides from 1 to 6 */
	int indexCount{ 1 };
	for (int index{ 0 }; index < size; index++)
		std::cout << "Count of " << indexCount++ << ": " << count[index] << std::endl;

	for (int index{ 0 }; index < size; index++)
		if (count[index] > max_count)
			max_count = count[index];

	for (int index{ 0 }; index < size; index++)
		if (count[index] < min_count)
			min_count = count[index];

	std::cout << std::endl;
	std::cout << "Maximum number is: " << max_count << std::endl;
	std::cout << "Minimum number is: " << min_count << std::endl;

	return 0;
}