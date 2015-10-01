// The bookstore program
// Run with "Get-Content books.dat | .\bookStore.exe > sales.txt"
// in Powershell
#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item total;
    // read first transaction
    if (std::cin >> total) {
        Sales_item trans;
        // read remaining transactions
        while (std::cin >> trans) {
            if (total.isbn() == trans.isbn())
                total += trans;
            else {
                // print results for previous book
                std::cout << total << std::endl;
                total = trans; // change to next book
            }
        }
        // print the last book
        std::cout << total << std::endl; 
    } else {
        // warn the user for no input
        std::cerr << "No data!" << std::endl;
        return -1;
    }
    return 0;
}