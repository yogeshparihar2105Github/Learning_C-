//This is a Game in which you guess a number and program has to find what is it. 
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
    int ub = 100;
    int lb = 0;
    cout<<"Guess A number between 0 and 100"<<endl<<endl;
    
    while(true)
    {
        cout<<"Is the number you guessed : "<<n<<endl;

        cout<<"Enter 1 if true else 0"<<endl;
        cin>>isCorrectGuess;
        
        if(isCorrectGuess)
        {
            cout<<"Hurray, You Guessed You Won!";
            return 0;
        }
        else
        {
            bool isBigger = false;
            cout<<"Hmm... Is the number you guessed bigger than "<<n<<endl;
            cout<<"Enter 1 if true else 0"<<endl;
            cin>>isBigger;

            if(isBigger)
            {
                lb = n; 
            }
            else
            {
                ub = n;
            }
            n = Guess(lb,ub);
        }
    }
    return 0;
}
