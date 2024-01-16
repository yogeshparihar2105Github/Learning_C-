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

    Rectangle()
    {
        length = 0;
        breadth = 0;
    }

    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    
};

class Cuboid : public Rectangle
{
    public:
    int height;

    Cuboid(int l, int b,int h):Rectangle(l,b)
    {
        height = h;
    }

    int vol()
    {
        return length*breadth*height;
    }

};

int main()
{
    Cuboid c = Cuboid(2,5,10);
    
    cout<<"Volume : "<<c.vol()<<endl;
    cout<<"Area : "<<c.Area()<<endl;
    return 0;
}