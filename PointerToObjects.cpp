#include<iostream>
#include<cstring>

using namespace std;

class Rectangle
{
   public:
    int length;
    int breadth;

    int perimeter()
    {
        return 2*(length + breadth);
    }
    int Area()
    {
        return length * breadth;
    }
    
};

int main()
{
    //This will create object in the Heap Memory
    Rectangle *p = new Rectangle;

    p->length = 10;
    p->breadth = 4;

    cout<<"Area : "<<p->Area();

}