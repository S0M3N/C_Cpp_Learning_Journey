#include<stdio.h>

int main(){
	int x, c, R, fac[50], i=0;
	char ch;

	// taking the input from the user
	input:
	printf("Enter a number: ");
	// checking if the entered value is a integer or not
	if(scanf("%d", &x) == 0){
		printf("Enter a valid integer\n");
		while((ch = getchar()) != '\n' && ch != EOF);
		goto input;
	}

	// finding and storing the factors=
	for(c=1; c<=x; c++){
		R = x%c;
		if(R == 0){
			fac[i] = c;
			i++;
		}
	}

	// iterrating and printing value from the array
	printf("Factors of %d are: \n");
	for(int j=0; j<i; j++){
		printf("%d ", fac[j]);
	}

	return 0;
}