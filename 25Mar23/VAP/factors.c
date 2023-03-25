#include<stdio.h>

int main(){
	int x, c, R;
	char ch;
	input:
	printf("Enter a number: ");
	if(scanf("%d", &x) == 0){
		printf("Enter  a valid integer: ");
		while((ch = getchar()) != '\n' && ch != EOF);
		goto input;
	}
	for(c=1; c<=x; c++){
		R = x%c;
		if(R == 0){
			printf("%d \n", c);
		}
	}

	return 0;
}