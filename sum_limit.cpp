#include <iostream>
using namespace std;

int sum(int limit){
  if (limit <= 0) {
    return 0;
  } else {
    return limit + sum(limit-1);
  }
}

int main(){
  int number;
  cout<<"Enter a number: ";
  cin>>number;
  int result = sum(number);
  cout<<"Sum of the first "<<number<<" numbers: "<<result;
  return 0;
}
