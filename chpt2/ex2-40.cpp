// Ex2.40
#include <iostream>

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main()
{
    Sales_data item1;
    item1.revenue = 100;
    std::cout << item1.revenue << std::endl;
    
    return 0;
}