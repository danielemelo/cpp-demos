#include <iostream>
using namespace std;
int calculate(int base, int expo){
  int result = 0;
  if(expo == 0){
    return 1;
  } else if(expo == 1){
    return base;
  } else{
    result = base;
    for(int num = 2; num <= expo; num++) {
      result *= base;
    }
    return result;
  }
}
int main(){
  int base, exponent;
  cout<<"Enter the base: ";
  cin>>base;
  cout<<"Enter the exponent: ";
  cin>>exponent;
  cout<<"Result = "<<calculate(base, exponent);
  return 0;
}
