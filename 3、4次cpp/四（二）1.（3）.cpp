#include <iostream> 
using namespace std; 
void f(char* st, int i)
{
    if (i >= 0) 
    {
        st[i] = '\0';
        cout << st<<endl; 
        f(st, i - 1);
    }
}

int main3() 
{
    char st[] = "abcd"; 
    f(st,4); 
    return 0; 
}
