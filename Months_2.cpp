#include <iostream>
#include <string>

int main() {
    int month_num;
    std::cout << "Enter the month number: ";
    std::cin >> month_num; // Keep number for example: 7

    std::string month_name;
    int days_in_month;

    switch (month_num) {
        case 1:
            month_name = "January";
            days_in_month = 31;
            break;
        case 2:
            month_name = "February";
            days_in_month = 28;
            break;
        case 3:
            month_name = "March";
            days_in_month = 31;
            break;
        case 4:
            month_name = "April";
            days_in_month = 30;
            break;
        case 5:
            month_name = "May";
            days_in_month = 31;
            break;
        case 6:
            month_name = "June";
            days_in_month = 30;
            break;
        case 7:
            month_name = "July";
            days_in_month = 31;
            break;
        case 8:
            month_name = "August";
            days_in_month = 31;
            break;
        case 9:
            month_name = "September";
            days_in_month = 30;
            break;
        case 10:
            month_name = "October";
            days_in_month = 31;
            break;
        case 11:
            month_name = "November";
            days_in_month = 30;
            break;
        case 12:
            month_name = "December";
            days_in_month = 31;
            break;
        default:
            std::cout << "Error: The month number is incorrect." << std::endl;
            return 1;
    }
         
    std::cout << "Month name: " << month_name << std::endl;
    std::cout << "Number of days in a month: " << days_in_month << std::endl;

    return 0;
}