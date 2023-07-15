# include <iostream>

using namespace std;

// void fun(int A[], int n)
// {
//     int i;

//     for (i = 0; i < n; i++)
//     {
//         printf("%d \n", A[i]);
//     }
// }

// int main()
// {
//     int A[5] = {2, 4, 6, 8, 10};

//     fun(A, 5);

//     return 0;
// }

int * fun(int n)
{
    int *p;

    p = (int *)malloc(n * sizeof(int));

    return (p);
}

int main()
{
    int *A, i;

    A = fun(5);

    for(i = 0; i<5; i++)
    {
        printf("%d\n", A[i]);
    }
}