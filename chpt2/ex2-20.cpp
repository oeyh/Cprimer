// Ex2.20
#include <iostream>

int main()
{
    int i = 42;
    int *p1 = &i;
    *p1 = *p1 * *p1;    // 42 squared = 1764
    std::cout << i << std::endl;
    return 0;
}
