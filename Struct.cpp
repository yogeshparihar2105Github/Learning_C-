#include<iostream>
#include<cstring>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};
int main()
{
    struct Rectangle r;
    r.length = 10;
    r.breadth = 12;

    struct Rectangle r1 = {23,54};

    cout<<r1.breadth<<r1.length;
    return 0;
}