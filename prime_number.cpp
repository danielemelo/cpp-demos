#include <iostream>
using namespace std;

bool prime_number(int num, int div) {
  if(num % div == 0 && num > 2) {
    return false;
  } else {
    if(div < ((num / 2) + 1))
      return (prime_number(num, div + 1));
    else
      return true;
  }
}

int main() {
  int number, divider = 2;
  char answer;
  do {
    cout<<"Enter a natural number: ";
    cin>>number;
    if (prime_number(number, divider))
      cout<<"It's a prime number";
    else
      cout<<"It's not a prime number";
    cout<<"\nDo you want to enter another number? [y/n]? ";
    cin>>answer;
  } while (answer == 'y');
}
