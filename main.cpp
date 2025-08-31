//
// Created by olive on 8/31/2025.
//

#include <iostream>

int main() {
std::cout << "Choose a number";
    int number_1;
    std::cin >> number_1;
    std::cout << "Choose another number";
    int number_2;
    std::cin >> number_2;
    int number_sum;
    number_sum = number_1 + number_2;
    std::string number_sum_string = std::to_string(number_sum);
    std::cout << "The sum of those numbers is "+number_sum_string;
return 0;
}