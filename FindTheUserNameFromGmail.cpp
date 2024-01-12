#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    string s = "yogeshparihar2105@gmail.com";

    string userName;

    bool isValidUserName = true;

    for(int i = 0; s[i] != '@'; i++)
    {
        if(s[i] == '.' || s[i] =='_' || s[i] >= 65 && s[i] <= 90 || s[i] >= 97 && s[i] <= 122 ||
        s[i] >= 48 && s[i] <= 57)
        {
            userName = userName + s[i];
        }
        else
        {
            isValidUserName = false;
            cout<<"Invalid userName, should not contains : "<<s[i]<<endl;
        }
        
    }
    
    if(isValidUserName)
    {
        cout<<userName;
    }
    

    return 0;
}
