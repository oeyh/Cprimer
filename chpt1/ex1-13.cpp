// Ex 1.13 rewrite ex1-9 using for loop
// sum the integers from 50 to 100
#include <iostream>

int main()
{
    int sum = 0;
    for (int val = 50; val <= 100; ++val) {
        sum += val;
    }
    std::cout << sum << std::endl;
    return 0;
}