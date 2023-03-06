#include <iostream>


int main()
{
	int number;

	std::cout << "Enter the number of month " << std::endl;

	std::cin >> number;

	switch (number)
	{
	case 1:
		std::cout << "January 31 days" << std::endl;
		break;
	case 2:
		std::cout << "February 28 days (or 29 if the year is leap)" << std::endl;
		break;
	case 3:
		std::cout << "March 31 days" << std::endl;
		break;
	case 4:
		std::cout << "April 30 days" << std::endl;
		break;
	case 5:
		std::cout << "May 31 days" << std::endl;
		break;
	case 6:
		std::cout << "June 30 days" << std::endl;
		break;
	case 7:
		std::cout << "July 31 days" << std::endl;
		break;
	case 8:
		std::cout << "August 31 days" << std::endl;
		break;
	case 9:
		std::cout << "September 30 days" << std::endl;
		break;
	case 10:
		std::cout << "October 31 days" << std::endl;
		break;
	case 11:
		std::cout << "November 30 days" << std::endl;
		break;
	case 12:
		std::cout << "December 31 days" << std::endl;
		break;
	default:
		std::cout << "Wrong month" << std::endl;
		break;
	}

	return 0;
}