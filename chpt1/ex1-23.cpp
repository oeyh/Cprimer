// Ex 1-23
// Read several ordered transactions and count
// In powershell, "Get-Content ex1-23.dat | .\ex1-23.exe > ex1-23.txt"
// Same structure as eg1-4-4.cpp

#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item currBook, book;
    // read first book
    if (std::cin >> currBook) {
        int cnt = 1;    // initialize the counter
        // read all other books
        while (std::cin >> book) {
            if (book.isbn() == currBook.isbn())
                ++cnt;
            else {
                // write the count of previous book
                std::cout << currBook.isbn() 
                          << " " << cnt << std::endl;
                // change current book
                currBook = book;
                cnt = 1;
            }
        }
        // write last book and its count
        std::cout << currBook.isbn() 
                  << " " << cnt << std::endl;
    }
    else {
        std::cerr << "No input data!" << std::endl;
        return -1;
    }
    return 0;
}
