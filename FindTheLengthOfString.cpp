#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    string s = "Hello World";
//Using Iterator
    string::iterator itr;
    int count = 0;

    for(itr = s.begin(); itr != s.end(); itr++)
    {
        count++;
    }
    cout<<"using Iterator : "<<count<<endl;

//Using lenght() Method
    count = 0;
    for(int i = 0; i<s.length(); i++)
    {
        count++;
    }
    cout<<"using lenght() : "<<count<<endl;

//Using Normal Method Array Travel
    count = 0;
    for(int i = 0; s[i] != '\0'; i++)
    {
        count++;
    }
    cout<<"using Normal Method Array Travel : "<<count<<endl;

    return 0;
}