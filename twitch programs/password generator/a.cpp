/*

Project: Password generator

Some stuff, nothing special :D
Starting in a moment, I'll explain how this works.
*/
#include <iostream>
using namespace std;

int main() {
  // create a password generator
  // it will generate a password of length n
  // and will print it to the screen

  int n;
  cout << "Enter the length of the password: ";
  cin >> n;

  // create a char variable of length n
  char password[n];

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

  for (int i = 0; i < n; i++) {
      // make password random capitalized letters
    password[i] = letters[rand() % 26];
    cout << password[i] << " ";
    password[i] = numbers[rand() % 10];
    cout << password[i] << " ";
  }
  cout << endl;

  return 0;
}