#include <iostream>
using namespace std;
int factorial (int number) {
  if(number == 1){
    return 1;
  } else {
    return (number * factorial(number-1));
  }
}
int main() {
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    cout<<"Factorial: "<<factorial(number);
}
