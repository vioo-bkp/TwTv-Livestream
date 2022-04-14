/* Project name: Casino Number Guessing Game
    Name: M.V
    Date: 26/09/2021
*/
#include <iostream>
// import random function
#include <cstdlib>
// import string function
#include <string.h>
// import random function
#include <ctime>

using namespace std;

bool check_number(int number, int guess)
{
    if (number == guess) {
        return true;
    }
    else return false;
}

int main()
{
    // loop the game
    int number;
    int guess;
    char name[20];
    cout << "Enter your name: " << endl;
    cin >> name;
    cout << "Hello " << name << endl;
    cout << "Enter your ammount of money you have: " << endl;
    float money;
    cin >> money;
    if (money <= 500)
    {
        cout << "You'll lose all money if you don't pay attention :)" << endl
        << "Be carrefully" << endl;
    } else if (money <= 5000){
        cout << "God be with you: " << endl;

    } else if (money > 5000) {
        cout << "You are rich: " << name << endl;
    }
    while (true) {
      cout << "Choose what type of game do u prefer: " << endl
           << "1. Guess a number" << endl
           << "2. Random word" << endl
           << "3. Death casino" << endl;

      int choice;
      cin >> choice;
      if (choice == 1) {
        int number = rand() % 100 + 1;
        cout << "You chose to guess a number" << endl;
        cout << "Enter a number: " << endl;
        cin >> guess;
        
        if (check_number(number, guess))
        {
            cout << "You guessed right" << endl;
            money = money + 100;
            cout << "You have " << money << " dollars" << endl;
            
        } else {
            cout << "You guessed wrong" << endl;
            float debit = money - 100;
            cout << "You lost 100$" << endl;
            cout << "You have " << debit << "$ left" << endl;
        }
    // continue
        } else if (choice == 2) {
            cout << "You chose to guess a word" << endl;
            cout << "Enter a word: " << endl;
            char word[] = "hello";
            char guess[20];
            cout << "Enter a word: " << endl;
            cin >> guess;
            if (strcmp(word, guess) == 0)
            {
                cout << "You guessed right" << endl;
                money = money + 100;
                cout << "You have " << money << " dollars" << endl;
            }
            else {
                cout << "You guessed wrong" << endl;
                float debit = money - 100;
                cout << "You lost 100$" << endl;
                cout << "You have " << debit << "$ left" << endl;
            }
        } else if (choice == 3) {
            cout << "You chose to play death casino" << endl;
            cout << "What's the ammount of money u enter minus 100" << endl;
            float d_money;
            cin >> d_money;
            if (d_money == money - 100)
            {
                cout << "You win 100$" << endl;
            }
            else {
                cout << "You lost ALL" << endl;
                cout << name << " dead" << endl;
                return 0;
            }
        }
        cout << "wanna continue? [y/n]" << endl;
        char answer;
        cin >> answer;
        if (answer == 'n') {
            cout << "Goodbye" << endl;
            return 0;
        } else {
            continue;
        }
    }
    return 0;
}