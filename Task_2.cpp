#include <iostream>

/*
	UKRAININAN VERSION COMMENT.
	===================================================================
	Ќаписати програму, €ка дозвол€Ї за введеним з консол≥ числом
	визначити назву м≥с€ц€ та к≥льк≥сть дн≥в у цьому м≥с€ц≥.
	===================================================================

	-------------------------------------------------------------------

	ENGLISH VERSION COMMENT.
	===================================================================
	Write a program that allow you to enter the number entered from
	the console determine the name of the month and the number of days
	in that month.
	===================================================================
*/

int main()
{
	unsigned short numberOfMonth;

	std::cout << "Enter number of month (1 to 12): ";
	std::cin >> numberOfMonth;
	std::cout << std::endl;

	switch (numberOfMonth)
	{
	case 1:
		std::cout << "Month: January.\nCount of days: 31 days.\n";
		break;

	case 2:
		std::cout << "Month: February.\nCount of days: 28 days.\n";
		break;

	case 3:
		std::cout << "Month: March.\nCount of days: 31 days.\n";
		break;

	case 4:
		std::cout << "Month: April.\nCount of days: 30 days.\n";
		break;

	case 5:
		std::cout << "Month: May.\nCount of days: 31 days\n";

	case 6:
		std::cout << "Month: June.\nCount of days: 30 days.\n";
		break;

	case 7:
		std::cout << "Month: July.\nCount of days: 31 days.\n";
		break;

	case 8:
		std::cout << "Month: August.\nCount of days: 31 days.\n";
		break;

	case 9:
		std::cout << "Month: September.\nCount of days: 30 days.\n";
		break;

	case 10:
		std::cout << "Month: October.\nCount of days: 31 days.\n";
		break;

	case 11:
		std::cout << "Month: November.\nCount of days: 30 days.\n";
		break;

	case 12:
		std::cout << "Month: December.\nCount of days: 31 days.\n";
		break;

	default:
		std::cout << "Entered wrong number of month. Please try again!\n";
		break;
	}

	return 0;
}