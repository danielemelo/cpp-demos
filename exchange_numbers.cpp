#include <iostream>
using namespace std;
int main(){
	int num1, num2;
	cout<<"Enter the first number: ";
	cin>>num1;
	cout<<"Enter the second number: ";
	cin>>num2;
	num1 = num1 - num2;
	num2 = num2 + num1;
	num1 = num2 - num1;
	cout<<"First number: "<<num1<<endl;
	cout<<"Second number: "<<num2;
return 0;
}
