#include <iostream>
using namespace std;

void fibonacci(int length) {
	int prev=1, next=1, sum;
	cout<<"Sequence: ";
	if(length > 2) {
		cout<<prev<<" "<<next<<" ";
		for(int i = 2; i < length; i++){
			sum = prev + next;
			next = prev;
			prev = sum;
			cout<<sum<<" ";
		}
	} else if(length == 2) {
		cout<<prev<<" "<<next<<" ";
	} else {
		cout<<prev;
	}
}

int main(){
	int length;
	cout<<"FIBONACCI SEQUENCE"<<endl;
	cout<<"Enter the desired sequence length: ";
	cin>>length;
	fibonacci(length);
	return 0;
}
