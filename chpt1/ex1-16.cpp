// Reading unknown number of inputs
#include <iostream>

int main()
{
    int sum = 0, val = 0;
    // read until end-of-file
    std::cout << "Enter numbers, " 
              << "separate with Space, Tab or Return, "
              << "end with Ctrl-Z in Windows: " << std::endl;
    while (std::cin >> val)
        sum += val;
    std::cout << "Sum is " << sum << std::endl;
    return 0;
}