# include <iostream>

void fun(int n)
{
    if(n>0)
    {
        fun(n-1);

        printf("%d ", n);
    }
}

int main()
{
    fun(3);

    return 0;
}