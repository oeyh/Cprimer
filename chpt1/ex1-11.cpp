// Ex 1.11
// print numbers in a range set by the user
#include <iostream>

int main()
{
    int min = 0, max = 0, temp = 0;
    int i;
    // prompt user for input
    std::cout << "Enter two numbers: " << std::endl;
    std::cin >> min >> max;
    // re-order
    if (min > max) {
        temp = min;
        min = max;
        max = temp;
    }
    // print all numbers in between
    i = min;
    while (i <= max) {
        std::cout << i << std::endl;
        ++i;
    }
    return 0;
}