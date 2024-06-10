#include <iostream>
#include <cstdlib>


using namespace std;

int main()
{
    int secretNumber = rand() % 100 + 1;
    int guess = 0;
    int attempts = 0;

    cout << "Welcome to the Guessing Game!" << endl;
    cout << "A random number between 1 and 100 is generated." << endl;
    cout << "Can you guess what it is?" << endl;

    while (guess != secretNumber)
    {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < secretNumber)
        {
            cout << endl
                 << "Too low! Try again." << endl;
        }
        else if (guess > secretNumber)
        {
            cout << endl
                 << "Too high! Try again." << endl;
        }
        else
        {
            cout << endl
                 << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
        }
    }

    return 0;
}
