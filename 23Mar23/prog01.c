#include <stdio.h>

int main(){
    int a, b, sum;
    char c;
    input1:
    printf("Enter number 1: ");
    if (scanf("%d", &a) != 1){
        printf("Invalid input try again\n");
        while ((c = getchar()) != '\n' && c != EOF);
        goto input1;
    }
    input2:
    printf("Enter number 2: ");
    if (scanf("%d", &b) != 1){
        printf("Invalid input try again\n");
        while ((c = getchar()) != '\n' && c != EOF);
        goto input2;
    }
    printf("The sum is %d", a+b);
    return 0;
}
