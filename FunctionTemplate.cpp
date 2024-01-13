#include<iostream>
#include<cstring>

using namespace std;

template<class T>

T add(T a, T b)
{
    return a+b;
}

int main()
{
    int c = add(10, 15);
    float d = add(10.4f, 10.5f);
    double dd = add(10.5343, 10.343);

    //float ff = add(10, 10.34f);     //Gives error bcs all T should have same datatype

    cout<<"c : "<<c<<endl;
    cout<<"d : "<<d<<endl;
    cout<<"dd : "<<dd<<endl;

}