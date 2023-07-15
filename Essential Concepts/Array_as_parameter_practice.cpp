# include <iostream>

using namespace std;

// void fun (int *A, int n)
// {
//     for(int i=0; i<n; i++)
//     {
//     cout << i << endl;  
//     }

//     A[0] = 15;
// }

// int main()
// {
//     int A[ ] = {2, 4, 6, 8, 10};

//     int n = 5;

//     cout << sizeof(A) / sizeof(int) << endl;

//     fun(A, n);

//     for(int x:A)
//     {
//         cout << x << endl;
//     }

//     return 0;
// }

int * fun(int size)
{
    int *p;

    p = new int[size];

    for(int i=0; i<size; i++)
    {
        p[i] = i + 10;
    }

    return p;
}

int main()
{
    int *ptr, sz = 5;
    
    ptr = fun(sz);

    for(int i=0; i<sz; i++)
    {
        cout << ptr[i] << endl;
    }
    return 0;
}