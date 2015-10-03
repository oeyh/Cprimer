// eg 2-3-2 pointers
// test what int &r2 = *p; means
#include <iostream>

int main()
{
    int i = 3;
    int *p;
    p = &i;
    int &r = *p;    // Does it mean that r is an alias of i, to which
                    // p points
    
    std::cout << p << " " << r << " " << i << std::endl;
    return 0;
    
}
