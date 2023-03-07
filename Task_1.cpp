#include <iostream>
#include <string>

/*
	
	UKRAINIAN VERSION COMMENT.
	================================================================================
	Використовуючи генератор випадкових чисел, написати програму, яка здійснює кидок
	гральної кістки (1 - 6). Зробити кількість кидків, яка була введена в консоль та
	підрахувати кількість випадань кожної сторони. Вивести результат у консоль.
	Вивести сторони, які випали більше та менше.
	================================================================================

	--------------------------------------------------------------------------------

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
	srand(time(nullptr));

	unsigned int countOfThrow;

	unsigned int count[6] = { 0, 0, 0, 0, 0, 0 };
	unsigned int number[6] = { 1, 2, 3, 4, 5, 6 };

	unsigned int max_count = count[0];
	unsigned int min_count = count[0];

	std::string indexNumbers[] = { "First", "Second", "Third", "Fourth", "Fifth", "Sixth" };

	std::cout << "Input count of throw (1 to 6): ";
	std::cin >> countOfThrow;
	std::cout << std::endl;

	for (int newThrow = 0; newThrow < countOfThrow; newThrow++)
	{
		number[newThrow] = rand() % 6 + 1;

		std::cout << indexNumbers[newThrow] << " throw is: " << number[newThrow] << std::endl;

		if (number[newThrow] == 1)
			count[0]++;

		if (number[newThrow] == 2)
			count[1]++;

		if (number[newThrow] == 3)
			count[2]++;

		if (number[newThrow] == 4)
			count[3]++;

		if (number[newThrow] == 5)
			count[4]++;

		if (number[newThrow] == 6)
			count[5]++;
	}

	std::cout << std::endl;
	std::cout << "Count of throw of each sides:\n";
	std::cout << std::endl;

	std::cout << "Count of 1: " << count[0] << std::endl;
	std::cout << "Count of 2: " << count[1] << std::endl;
	std::cout << "Count of 3: " << count[2] << std::endl;
	std::cout << "Count of 4: " << count[3] << std::endl;
	std::cout << "Count of 5: " << count[4] << std::endl;
	std::cout << "Count of 6: " << count[5] << std::endl;

	for (int index = 1; index < 6; index++)
		if (count[index] > max_count)
			max_count = count[index];

	for (int index = 1; index < 6; index++)
		if (count[index] < min_count)
			min_count = count[index];

	std::cout << std::endl;
	std::cout << "Maximum number is: " << max_count << "\n";
	std::cout << "Minimum number is: " << min_count << "\n";

	return 0;
}