// Project: Login System with Registration & Filestoring & Filesystem C++
// Author: Mateescu Viorel-Cristian
// Date: 23.09.2021

#include <fstream>
#include <iostream>
using namespace std;


int main()
{
  
  cout << endl << "Salut eu sunt PC ";
  

  return 0;
}

// bool verify_account(string username, string password) {
//   ifstream file;
//   file.open("users.txt");
//   string line;
//   while (getline(file, line)) {
//     if (line == username + " " + password) {
//       file.close();
//       return true;
//     }
//   }
//   file.close();
//   return false;
// }

// //
// int create_user(string username, string password) {
//   ofstream file;
//   file.open("users.txt", ios::app);
//   file << username << " " << password << endl;
//   file.close();

//   return 0;
// }

// // making a temp file to store the list of users, then if the user is found, we
// // remove them from the list and add the new one

// void delete_user(string username) {

//   ifstream file;
//   file.open("users.txt");
//   string line;
//   ofstream temp;
//   temp.open("temp.txt");
//   while (getline(file, line)) {
//     std::string id(line.begin(), line.begin() + line.find(" "));
//     if (id != username) {
//       temp << line << endl;
//     }
//   }
//   file.close();
//   temp.close();
//   remove("users.txt");
//   rename("temp.txt", "users.txt");
// }

// int main() {
//   string username, password;
//   cout << "!!!!!!!!!! WELCOME TO LOGIN ACCOUNT !!!!!!!!!!!!!" << endl;
//   cout << "Choose option:" << endl
//        << "1. Login " << endl
//        << "2. Register" << endl
//        << "3. Delete Account" << endl;
//   int choose_option;
//   cin >> choose_option;
//   if (choose_option == 1) {
//     cout << "Enter username: ";
//     cin >> username;
//     cout << "Enter password: ";
//     cin >> password;
//     if (verify_account(username, password)) {

//       cout << "Account verified" << endl << "Welcome " << username << endl;
//       return 0;

//     } else {
//       cout << "Wrong password or username" << endl;
//       cout << "Do you want to create an account? (y/n)" << endl;
//       char answer;
//       cin >> answer;
//       if (answer == 'y') {
//         create_user(username, password);
//         cout << "Account created" << endl;
//       } else if (answer == 'n') {

//         cout << "Thanks! Goodbye!" << endl;
//       }
//     }
//   } else if (choose_option == 2) {
//     cout << "Let's start registration: " << endl;
//     cout << "Enter username: ";
//     cin >> username;
//     cout << "Enter password: ";
//     cin >> password;

//     verify_account(username, password);

//     if (verify_account(username, password) == true) {
//       cout << "! Account already existing. Check again your info !" << endl;

//     } else if (verify_account(username, password) == false) {

//       create_user(username, password);
//       cout << "Account created" << endl;
//     }
//   } else if (choose_option == 3) {
//     // tell user the name for the account to be deleted
//     cout << "Enter username to be removed: ";
//     cin >> username;
//     delete_user(username);
//     cout << "Account deleted" << endl;
//   }

//   return 0;
// }