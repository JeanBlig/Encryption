#ifndef RandomNum
#define RandomNum

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

std::vector <int> randomgen() {
    // Create a vector of numbers
    std::vector<int> random{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25,};

    // Shuffle the numbers
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(random.begin(), random.end(), g);

    return random;
    
}

std::vector <int> randomgen1() {
    // Create a vector of numbers
    std::vector<int> random{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, };

    // Shuffle the numbers
    
    std::mt19937 g(8877);
    std::shuffle(random.begin(), random.end(), g);

    return random;

}

std::vector <int> randomgen2() {
    // Create a vector of numbers
    std::vector<int> random{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, };

    // Shuffle the numbers
    
    std::mt19937 g(1243);
    std::shuffle(random.begin(), random.end(), g);

    return random;

}




#endif 
