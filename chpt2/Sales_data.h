// header file that defines class Sales_data
#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>

struct Sales_data {
    std::string bookNo;
    unsigned units = 0;
    double revenue = 0.0;
};  // remember semicolon at the end of a struct

#endif