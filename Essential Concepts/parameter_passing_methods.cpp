# include <iostream>

using namespace std;

// void swap(int *x, int *y)
// {
//     int temp;

//     temp = *x;

//     *x = *y;     // Call by Address

    
//     *y = temp;
// }

void swap(int &x, int &y)
{
    int temp;

    temp = x;  // Call by Reference

    x = y;

    y= temp;
}

int main()
{
    int a, b;

    a = 10;

    b = 20;
    
    // swap(a, b);   // Pass by Value

    swap(&a, &b); // Pass by Address

    printf("a = %d & b = %d", a, b);

    return 0;
}