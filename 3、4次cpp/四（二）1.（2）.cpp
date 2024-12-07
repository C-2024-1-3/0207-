#include <iostream>
using namespace std;
int main2()   
{
    int a[] = { 1,2,3 };
    int* p, i;
    p = a;  
    for (i = 0; i < 3; i++)
        printf("%d,%d,%d,%d\n", a[i], p[i], *(p + i), *(a + i)); 
    return 0;
}
