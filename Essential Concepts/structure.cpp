# include <iostream>

struct Rectangle
{
    int length;
    int breadth;
};

struct Complex
{
    int real;
    int img;
};

struct Student
{
    int roll;
    char name[25];
    char dept[10];
    char address[50];

};

struct Card
{
    /* data */
    int face;
    int shape;
    int color;
};


int main()
{
    struct Rectangle r = {10, 5};
    r.length = 15;
    r.breadth = 10;
    printf("Area of Rectangle = %d", r.breadth * r.length);  

    struct Student s;
    s.roll = 10;
    s.name = "Rohan";  

    struct Card c;
    c.face = 1;
    c.shape = 0;
    c.color = 0;
    // struct Card c = {1, 0, 0}

    struct Card deck[52] = {{1, 0, 0}, {2, 0, 0}};
    printf("%d", deck[0].face);
    printf("%d",deck[0].shape);

    return 0;       
    
}