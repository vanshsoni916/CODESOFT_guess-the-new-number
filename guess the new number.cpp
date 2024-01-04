//Guessing the number game

#include <iostream>
#include <ctime>
#include <cstdlib>


using namespace std;

int main()
{
    int guess;
    int trynum = 0;

    // Generating random numbers
    
    srand(static_cast<unsigned int>(time(nullptr)));   

    int Numsec = rand() % 100 + 1; // random number generation between 1 to 100

    

    cout << "This is the ground of number guessing game!" << endl;
    cout << "Guess a Number between 1 and 100 :-" << endl;

    while (true)
    {
        cout << "Enter your guess: ";
        cin >> guess;

        trynum++;

       
        if (guess == Numsec)
        {
           cout << "The number you guessed is correct! " << Numsec << " in " << trynum << " attempts." << endl; 
           break;
        }
         else if (guess < Numsec)
        {
            cout << "Lesser than the number!.Give another try." << endl;
        }
        else
        {
            cout << "Greater than the number!.Give another try." << endl;
        }
    }

    return 0;
}