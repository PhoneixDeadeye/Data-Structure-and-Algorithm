# include <iostream>
# include <stdio.h>

using namespace std;

class Rectangle
{
    public:

    int length;

    int breadth;

void initialize(int l, int b)
{
    length = l;
    
    breadth = b;
}

int area()
{
    return length * breadth;
}

int perimeter()
{
    return 2 * (length + breadth);
}

};

int main()
{
    Rectangle r = {0 ,0};

    int l, b;
 
    printf("Enter length and breadth");
    
    cin >> l >> b;

    r.initialize(l, b);

    int a = r.area();

    int peri = r.perimeter();

    printf("Area = %d\nPerimeter = %d\n", a, peri);

    return 0;
}