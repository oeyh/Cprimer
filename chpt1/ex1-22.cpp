// Ex 1-22
// Read multiple books and add them together
// In powershell, "Get-Content ex1-22.dat | .\ex1-22.exe > ex1-22.txt"
#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item book, sum;
    // reading first book info
    if (std::cin >> book) {
        sum = book;
        // read every book info left
        while (std::cin >> book) {
            sum += book;
        }
    }
    std::cout << sum << std::endl;
    return 0;
}