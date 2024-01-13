#include<iostream>
#include<cstring>

using namespace std;

int add(int a, int b = 0, int c = 0)
{
    return a+b+c;
}

int main()
{
    int c = add(10);
    float d = add(10, 10);
    double dd = add(10, 10, 10);

    //float ff = add(10, 10.34f);     //Gives error bcs all T should have same datatype

    cout<<"c : "<<c<<endl;
    cout<<"d : "<<d<<endl;
    cout<<"dd : "<<dd<<endl;

}