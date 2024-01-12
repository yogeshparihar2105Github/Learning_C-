#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    string s = "NOOOON";
    bool isEqual = true;

    for(int i = 0; s[i] != '\0'; i++)
    {
        if(s[i] != s[s.length()-i-1])
        {
            cout<<"NOT EQUAL"<<endl;
            isEqual = false;
            break;
        }
    }
    
    if(isEqual)
    {
        cout<<"Equal";
    }

    return 0;
}