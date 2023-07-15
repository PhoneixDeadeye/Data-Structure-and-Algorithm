# include <iostream>

using namespace std;

// int add(int a, int b)
// {
//     int c;

//     c = a + b;

//     // a++;  

//     // cout << a;

//     return c;
// }

// void swap(int *x, int *y)
// {
//     int temp;

//     temp = *x;

//     *x = *y;

//     *y = temp;
// }

void swap(int &x, int &y)
{
    int temp;

    temp = x;

    x = y;

    y = temp;
}

int main()
{
    int num1 = 10, num2 = 15, sum;

    // sum = add(num1, num2);

    // cout << endl << num1; 

    // // cout << "Sum is " << sum;

    // swap(&num1, &num2);

    swap(num1, num2);

    cout << "First Number " << num1 << endl;

    cout << "Second Number " << num2 << endl;

    return 0;
}