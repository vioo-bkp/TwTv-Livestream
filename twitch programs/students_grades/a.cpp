#include <fstream>
#include <iostream>
using namespace std;
// create a database of students
// each student has a name, adress, grades

int prints_name(char *student_name)
{
    cout << student_name << endl;

    return 1;
}

int main()
{
    // create file
    ofstream outfile;
    outfile.open("student.txt");
    // write to file from a csv file
    outfile << "name, grades" << endl;

    // create random students
    for (int i = 0; i < 10; i++)
    {
        outfile << "student " << i << ",grades " << i << endl;
    }
    outfile.close();

    // display average grade
    ifstream infile;
    infile.open("student.txt");
    string line;
    int sum = 0;
    int count = 0;
    while (getline(infile, line))
    {
        cout << line << endl;
        count++;
        sum += count;       
    }

    cout << "average grade: " << sum / count << endl;
    infile.close();

   

    return 0;
}