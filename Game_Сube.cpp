#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
  
    int num_rolls;
    std::cout << "Enter the number of throws:";
    std::cin >> num_rolls;

    int counts[6] = {0};
    std::srand(std::time(nullptr));
    for (int i = 0; i < num_rolls; i++) {
        int roll = std::rand() % 6 + 1;
        counts[roll - 1]++;
    }

    std::cout << "Throw results: " << std::endl;
    int min_count = num_rolls;
    int max_count = 0;
    for (int i = 0; i < 6; i++) {
        std::cout << i+1 << ": " << counts[i] << std::endl;
        if (counts[i] < min_count) {
            min_count = counts[i];
        }
        if (counts[i] > max_count) {
            max_count = counts[i];
        }
    }

    std::cout << "The smallest number of fallouts: " << std::endl;
    for (int i = 0; i < 6; i++) {
        if (counts[i] == min_count) {
            std::cout << i+1 << std::endl;
        }
    }

    std::cout << "The largest number of fallsout:  " << std::endl;
    for (int i = 0; i < 6; i++) {
        if (counts[i] == max_count) {
            std::cout << i+1 << std::endl;
        }
    }

    return 0;
}