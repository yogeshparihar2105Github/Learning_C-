#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    string s = "Hello";


    cout<<"Pushing to Hello"<<endl;
    s.push_back('W');
    cout<<s<<endl;

    cout<<"Poping from HelloW"<<endl;
    s.pop_back();
    cout<<s<<endl<<endl;

    cout<<"Congratulations, You Learned How to Push and Pop from a string";
    return 0;
}