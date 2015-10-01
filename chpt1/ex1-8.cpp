// Exercise 1.8
#include <iostream>
int main()
{
    std::cout << "/*";
    std::cout << "*/";
    std::cout << /* "*/" */;    // This line is illegal
    std::cout << /* "*/" /* "/*" */;    // This line is legal, it contains two comment blocks and a string literal
    std::cout << std::endl;
}