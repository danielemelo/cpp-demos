#include <stdio.h>
int main(){
	int number;
	int sum = 0;
	printf("Enter a number: ");
	scanf("%d",&number);
	for(int i = number - 1; i != 0; i--) {
		if(number%i == 0)
			sum += i;
	}
	if(number == sum)
		printf("\nIt's a perfect number");
	else
		printf("\nIt's not a perfect number");
}
