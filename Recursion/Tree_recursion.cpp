# include <iostream>
# include <stdio.h>

void fun(int n)
{
    if (n>0)
    {
        printf("%d ", n);

        fun(n-1);

        fun(n-1);
    }
}

using namespace std;

int main()
{
    fun(3);
    
    return 0;
}