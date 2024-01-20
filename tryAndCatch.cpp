#include<iostream>
#include<cstring>

using namespace std;

int Division(int b, int a)
{
    if (b == 0)
    {
        throw 10;
    }
    return a / b;
}
int main()
{

    int a = 10, b=0, c;

    try
    {
       c = Division(b, a);
    }
    catch(int e)
    {
        cout<<"Exception code "<<e<<endl;
    }
    

    cout<<"Value of C : "<<c;
    return 0;
}


