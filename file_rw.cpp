#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
  string data;
  // writing function
  ofstream outfile;
  // opens with the file name in the directory and the opening mode: app (add)
  outfile.open("students.txt", ios::app);
  // checks if the file is ok
  if (outfile.is_open() && outfile.good()) {
    cout << "Writing in the file..." << endl;
    cout << "Enter the student's name: ";
    getline(cin, data);
    // writing in the file
    outfile << data << endl;
    cout << "Enter the student's age: ";
    cin >> data;
    // here clears the line break character
    cin.ignore();
    // writing in the file
    outfile << data<< endl;
    // close the operation
    outfile.close();
  }

  //reading function
  ifstream infile;
  infile.open("students.txt", ios::in);
  // checks if the file is ok
  if(infile.is_open() && infile.good()) {
    /*
      For reading the entire file -->

      // while the file does not finish
      while (!infile.eof() ){
        // reads the current line
        getline (infile, data)
        // shows the data
        cout << data << endl;

    */
    // For specific lines
    cout << "Reading the file..." << endl;
    // reads the current line
    getline(infile, data);
    cout<<"Name: ";
    cout << data << endl;
    getline(infile, data);
    cout<<"Age: ";
    cout << data << endl;
    infile.close();
  }

  return 0;
}
