#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    cout << "\n-------------Welcome to the Number guessing game------------- \n"<< endl;
    cout << "\n--->>You will have to guess a number between 1 to 100.";
    cout << "\n--->>Let's start playing and best of luck." << endl;

    srand(time(0));
    int random = (rand() % 100) + 1;

    cout << "\n^^**You will have total 5 chances to guess the correct number**^^\n";
    int chanceleft = 5;
    int playerinput;

    for (int i = 0; i <= 5; i++)
    {
        cout << "\n--->Enter a number: ";
        cin >> playerinput;

        if (playerinput == random)
        {
            cout << "\nCongrats!!. You have succesfully guessed the right number\n" ; 
            cout << "\nThanks for playing. Have a nice day";
            break;
        }

        else
        {
            if (playerinput > random)
            {
                cout << "\n"
                        "Insert a smaller number . Try again"
                        ""
                     << endl;
            }
            else
            {
                cout << "\n"
                        "[ Insert a larger number . Try again]"
                        ""
                     << endl;
            }
        }
        chanceleft--;
        cout << "\n( Chances left to guess the random number: " << chanceleft << ")" << endl;

        if (chanceleft == 0)
        {
            cout << "\n Sorry your chance has been finished to guessthe random number\n"
                 << endl;
            cout << " The random number was : " << random << endl;
            cout << "Thanks for playing have a nice day.";
        }
    }
    cout << "\n";
    return 0;
}