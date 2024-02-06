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
   Rectangle r1;

   r1.length = 10;
   r1.breadth = 5;

   cout<<"Length : "<<r1.length<<" Breadth : "<<r1.breadth<<endl; 
   cout<<"Area : "<<r1.Area()<<endl;
   cout<<"Perimeter : "<<r1.perimeter()<<endl;

}