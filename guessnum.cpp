#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
    cout<<" ******** Welcome to the Number Guessing Game ********"<<endl;
    cout<<" You will have to guess a number between 1 to 100 "<<endl;
    cout<<" Lets start playing"<<endl;

    srand(time(0));
    int randNumber=( rand() %100) + 1;

    cout<<" \n --You will have total 5 chances to guess the correct number.--\n";
    int chanceLeft=5;
    int playerInput;

    for(int i=1;i<=5;i++)
    {
        cout<<"\n -->Enter the number: ";
        cin>> playerInput;
        
        if(playerInput==randNumber)
        {
            cout<<"\n Congratulations!.You have successfully guessed the right number\n";
            cout<<"\n Thanks for playing.";
            break;
        }
        else
        {
           if(playerInput>randNumber)
           {
            cout<<"\n"" Insert a smaller Number.Try Again"""<<endl;
           }
           else
           {
             cout<<"\n"" [Insert a Larger Number.Try Again]"""<<endl;
           }
        }
        chanceLeft--;
        cout<<"\n (Chances left to guess the random number: "<< chanceLeft << " )"<<endl;
        
        if(chanceLeft == 0 )
        {
            cout<< "\n Sorry your chance has been finished to fuess the random number\n"<<endl;
            cout<< " The random Number was : "<< randNumber <<endl;
            cout<< " Thanks for playing.";
        }
    }
    cout<<"\n ";
    return 0;
    }