#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    string s = "Hello";

    char carr[10];

    s.copy(carr, 3);
    carr[3] = '\0';

    cout<<carr<<endl;
    return 0;
}