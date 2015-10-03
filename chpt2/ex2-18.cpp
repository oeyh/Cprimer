// Ex2-18
// change the value of a pointer and change the value to 
// which the pointer points
#include <iostream>

int main()
{
    int i = 0, j = 0;
    int *r = &i;
    std::cout << r << std::endl;
    // change the value of the pointer
    r = &j;
    std::cout << r << std::endl;
    // change the value to which the pointer points
    *r = 3;
    std::cout << r << std::endl;
    std::cout << j << std::endl;
    std::cout << i << std::endl;
    return 0;
    
}