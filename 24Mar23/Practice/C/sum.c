#include<stdio.h>

int main(){
	int a, b, sum;
	char c;

	input1:
	printf("Enter 1st number: ");
	if(scanf("%d", &a) != 1){
		printf("Invalid input please try again \n");
		while((c = getchar()) != '\n' && c != EOF);
		goto input1;
	}
	input2:
	printf("Enter 2nd number: ");
	if(scanf("%d", &b) != 1){
		printf("Invalid input please try again \n");
		while((c = getchar()) != '\n' && c != EOF);
		goto input2;
	}

	sum = a+b;
	printf("The sum is %d", sum);
	return 0;
}