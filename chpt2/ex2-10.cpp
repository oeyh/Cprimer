// Ex 2.10
#include <iostream>

int global_int;
std::string global_str;

int main()
{
    int local_int;
    std::string local_str;
    
    // try to print initial values;
    std::cout << "global int: " << global_int << std::endl;
    std::cout << "global str: " << global_str << std::endl;
    std::cout << "local int: " << local_int << std::endl;
    std::cout << "local str: " << local_str << std::endl;
    
    return 0;
}