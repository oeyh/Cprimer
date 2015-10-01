// Exercise 1.9
#include <iostream>
int main()
{
    int sum = 0, val = 50;
    // sum the integers from 50 to 100
    while (val <= 100) {
        sum += val;
        ++val;
    }
    std::cout << sum << std::endl;
}