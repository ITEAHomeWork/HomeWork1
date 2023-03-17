#pragma once

#include <iostream>
#include <string>
#include <regex>

namespace Task2
{
	std::string date;
	int monthNumber;
	void InputDate()
	{	
		std::cout << "Input date: ";
		std::cin >> date;
	}
	void ParseDate()
	{
		std::regex regexpr("[0-9][0-9]");		
		std::regex validateDateExpr("(0[1-9]|[12][0-9]|3[01]{1,2}).(0[1-9]|[12]{1,2}).(19[0-9][0-9]|20[0-9][0-9])");
		if (std::regex_match(date, validateDateExpr))
		{
			auto words_begin = std::sregex_iterator(date.begin(), date.end(), regexpr);
			auto words_end = std::sregex_iterator();
			int counter = 0;
			for (std::sregex_iterator i = words_begin; counter < 2; ++i, ++counter)
			{
				std::smatch match = *i;
				std::string match_str = match.str();
				if (counter == 1)
				{
					monthNumber = atoi(match_str.c_str());
					break;
				}
			}
			switch (monthNumber)
			{
			case 1:
				std::cout << "January - 31 days" << std::endl;
				break;
			case 2:
				std::cout << "February - 28 days in a common year and 29 days in leap years" << std::endl;
				break;
			case 3:
				std::cout << "March - 31 days" << std::endl;
				break;
			case 4:
				std::cout << "April - 30 days" << std::endl;
				break;
			case 5:
				std::cout << "May - 31 days" << std::endl;
				break;
			case 6:
				std::cout << "June - 30 days" << std::endl;
				break;
			case 7:
				std::cout << "July - 31 days" << std::endl;
				break;
			case 8:
				std::cout << "August - 31 days" << std::endl;
				break;
			case 9:
				std::cout << "September - 30 days" << std::endl;
				break;
			case 10:
				std::cout << "October - 31 days" << std::endl;
				break;
			case 11:
				std::cout << "November - 30 days" << std::endl;
				break;
			case 12:
				std::cout << "December - 31 days" << std::endl;
				break;
			}
		}
		else
		{
			std::cout << "You inputed incorect date.";
		}
	}
}