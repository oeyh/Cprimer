// Ex 2.15
// test if a reference can be initialized by an obj that has not
// been initialized yet
#include <iostream>

int main()
{
    int ival;
    int &rval2 = ival;
    std::cout << ival << " " << rval2 << std::endl;
    return 0;
}
