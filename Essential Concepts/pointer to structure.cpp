# include <iostream>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};


int main()
{
    // struct Rectangle r= {10, 5};
    // struct Rectangle *p = &r;

    // (*p).length = 15;
    // p ->length = 20;
    

    struct Rectangle *p;

    p = (struct Rectangle *)malloc(sizeof(struct Rectangle));

    p -> length = 10;

    p -> breadth = 5;
    
}