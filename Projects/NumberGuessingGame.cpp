#include<iostream>
#include<cstring>
#include <cstdlib>

using namespace std;

int Guess(int lb, int ub)
{
    return (rand() % (ub - lb + 1)) + lb;
}

int main()
{
    bool isCorrectGuess = false;
    int n = Guess(0,100);
    cout<<"Guess A number between 0 and 100"<<endl;
    cout<<"Is the number you guessed : "<<n<<endl;
    cout<<"Enter 1 if true else 0"<<endl;
    cin>>isCorrectGuess;
    
    if(isCorrectGuess)
    {
        cout<<"Hurray, I won!";
    }
    else
    {
        bool isBigger = false;
        cout<<"Hmm... Is the number you guessed bigger than "<<n<<endl;
        cout<<"Enter 1 if true else 0"<<endl;
        cin>>isBigger;
    }
    return 0;
}
