#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    string s = "HELLO WORLD";
//Using Iterator
    string::iterator itr;
    for(itr = s.begin(); itr != s.end(); itr++)
    {
       *itr = *itr + 32;
    }
    cout<<"using Iterator : "<<s<<endl;

    return 0;
}