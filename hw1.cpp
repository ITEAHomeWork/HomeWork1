// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>


int main()
{
    srand(time(NULL));

    int initialArray[6] = { 0, 0, 0, 0, 0, 0 };
    int boneSide[6] = { 1,2,3,4,5,6 };
    int Throws;
    int maxValue = 0;
    int boneResult;


    std::cout << "Hi, Enter the number of throws:" << std::endl;

    std::cin >> Throws;

    for (int i = 0; i < Throws; i++) {

        int randBone = rand() % 6;

        if (randBone == 0) {
            initialArray[0]++;
        }
        if (randBone == 1) {
            initialArray[1]++;
        }
        if (randBone == 2) {
            initialArray[2]++;
        }
        if (randBone == 3) {
            initialArray[3]++;
        }
        if (randBone == 4) {
            initialArray[4]++;
        }
        if (randBone == 5) {
            initialArray[5]++;
        }
    };

    for (int j = 0; j < (sizeof(initialArray)/sizeof(int)) ; j++) {

        if (initialArray[j] > maxValue) {
            maxValue = initialArray[j];
            boneResult = boneSide[j];

        }

    };

    std::cout << "Number of " << boneResult << " was thrown "<< maxValue<< " times" << std::endl;

  /*
 
    for (const auto e : initialArray) {
    std::cout << e << std::endl;
    }  
    Array checker 
  
  */



}
