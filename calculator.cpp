#include <iostream>
using namespace std;
int main(){
    float num1, num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"Sum: "<<num1 + num2<<endl;
    cout<<"Subtraction: "<<num1 - num2<<endl;
    cout<<"Multiplication: "<<num1 * num2<<endl;
    cout<<"Division: ";
    if (num2 != 0) {
      cout<<num1 / num2<<endl;
    } else {
      cout<<"Error: division by zero"<<endl;
    }
    return 0;
}
