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

class Cuboid : public Rectangle
{
    public:
    int height;

    Cuboid(int l, int b, int h)
    {
        length = l;
        breadth = b;
        this->height = h;
    }

    int vol()
    {
        return length*breadth*height;
    }

};

int main()
{
    Cuboid c = Cuboid(20,40,10);
    
    cout<<"Volume : "<<c.vol()<<endl;
    cout<<"Perimeter : "<<c.perimeter()<<endl;
    return 0;
}