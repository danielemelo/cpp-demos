#include <iostream>
using namespace std;

int Absolute (int number) {
	if(number < 0) {
	  number = number * (-1);
	}
	return number;
}

int main(){
  int number;
  cout<<"Enter a number: ";
  cin>>number;
  cout<<"His module is: "<<Absolute(number)<<endl;
  return 0;
}
