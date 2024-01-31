#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;


struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    //This will create the Struct Rectangle in Stack Memory
    struct Rectangle r = {10,5};
    Rectangle *p = &r;
    p->breadth;
    p->length;

    //If you want to create in Heap Memory in c
    struct Rectangle *p1;
    p1 = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    p1->breadth = 10;
    p1->length = 5;

    //If you want to do the above in c++
    //you can do this way
    struct Rectangle *p2;
    p2 = new Rectangle;
    p2->breadth = 10;
    p2->length = 5;
    
    return 0;
}
