// add two Sales_items
// using "Get-Content input.txt | ./program > output.txt" in Powershell
// to redirect standard input and output
#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item1, item2;
    std::cin >> item1 >> item2;
    std::cout << item1 + item2 << std::endl;
    return 0;
}