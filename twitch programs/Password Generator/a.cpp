// Project: Password generator
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
/*
Some stuff, nothing special :D
Starting in a moment, I'll explain how this works.
*/

int main() {
    // create a password generator
    // it will generate a password of length n
    // and will print it to the screen
    cout << "Enter the length of the password: ";
    int n;
    char password[n];
    cin >> n;
    // create a random number generator
    // it will generate a random number between 0 and 9
    // and will use it to fill the string
    // the random number generator will be seeded with the current time
    srand(time(0));
    char letters[] = "abcdefghijklmnopqrstuvwxyz";
    char numbers[] = "0123456789";
    /*
    TODO:
    - make the letters random capital letters
    - thanks to W0rldpotato for the idea :)
    */
    /* TODO: Solved */
    for (int i = 0; i < n; i++) {
        // generate a random number between 0 and 9
        int r = rand() % 10;
        // if r is 0, then the character is a letter
        if (r == 0) {
            // generate a random number between 0 and 25
            // this will be the index of the letter in the letters array
            int index = rand() % 26;
            // add the letter to the password
            password[i] = letters[index];
        } else {
            // if r is not 0, then the character is a number
            // generate a random number between 0 and 9
            // this will be the index of the number in the numbers array
            int index = rand() % 10;
            // add the number to the password
            password[i] = numbers[index];
        }
    }
    // print the password to the screen
    cout << "Your password is: " << password << endl;
    return 0;
}