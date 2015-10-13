// Ex 2.41
// Using self-defined Sales_data class to write a program that
// 1) read a set of book sales transactions, write to output
// 2) read a set of book sales transactions, write the sum to output
// Using file redirection in powershell
// Run with "Get-Content books.dat | .\ex2-41.exe > sales.txt"
#include <iostream>
#include <string> // remember to include string lib for string

struct Sales_data {
    std::string bookNo;
    unsigned units = 0;
    double revenue = 0.0;
};  // remember semicolon at the end of a struct

int main()
{
    Sales_data sum;
    double price = 0.0;
    // read the first data
    if (std::cin >> sum.bookNo >> sum.units >> price) {
        sum.revenue = price * sum.units;
        
        Sales_data curr;
        // read the rest of the data
        while (std::cin >> curr.bookNo >> curr.units >> price) {
            curr.revenue = price * curr.units;
            // add the same book data together
            if (curr.bookNo == sum.bookNo) {
                sum.units += curr.units;
                sum.revenue += curr.revenue;
            }
            else {
                // write previous book sum data out
                std::cout << sum.bookNo << " " << sum.units << " " 
                          << sum.revenue/sum.units << " "
                          << sum.revenue << std::endl;
                // move on to current book
                sum.bookNo = curr.bookNo;
                sum.units = curr.units;
                sum.revenue = curr.revenue;
            }
        }
        // write last book sum data out
        std::cout << sum.bookNo << " " << sum.units << " " 
                  << sum.revenue/sum.units << " "
                  << sum.revenue << std::endl;
    }
    else {
        // if there is no data input, display a warning message
        std::cerr << "No available data" << std::endl;
        return -1;
    }
    return 0;
}