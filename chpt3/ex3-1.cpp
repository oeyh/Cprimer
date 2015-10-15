// Ex 3.1
// Using "using" declarations
// Using self-defined Sales_data class to write a program that
// 1) read a set of book sales transactions, write to output
// 2) read a set of book sales transactions, write the sum to output
// Using file redirection in powershell
// Run with "Get-Content books.dat | .\ex3-1.exe > sales.txt"
#include <iostream>
#include <string> // remember to include string lib for string

// using declarations
using std::string;
using std::cin; using std::cout; using std::cerr; using std::endl;

struct Sales_data {
    string bookNo;
    unsigned units = 0;
    double revenue = 0.0;
};  // remember semicolon at the end of a struct

int main()
{
    Sales_data sum;
    double price = 0.0;
    // read the first data
    if (cin >> sum.bookNo >> sum.units >> price) {
        sum.revenue = price * sum.units;
        
        Sales_data curr;
        // read the rest of the data
        while (cin >> curr.bookNo >> curr.units >> price) {
            curr.revenue = price * curr.units;
            // add the same book data together
            if (curr.bookNo == sum.bookNo) {
                sum.units += curr.units;
                sum.revenue += curr.revenue;
            }
            else {
                // write previous book sum data out
                cout << sum.bookNo << " " << sum.units << " " 
                          << sum.revenue/sum.units << " "
                          << sum.revenue << endl;
                // move on to current book
                sum.bookNo = curr.bookNo;
                sum.units = curr.units;
                sum.revenue = curr.revenue;
            }
        }
        // write last book sum data out
        cout << sum.bookNo << " " << sum.units << " " 
                  << sum.revenue/sum.units << " "
                  << sum.revenue << endl;
    }
    else {
        // if there is no data input, display a warning message
        cerr << "No available data" << endl;
        return -1;
    }
    return 0;
}