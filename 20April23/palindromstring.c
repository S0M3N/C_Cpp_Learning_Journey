#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

char STACK[MAX_SIZE];
int top = -1;

void push(char c){
    if(top == MAX_SIZE -1){
        return;
    }
    STACK[++top] = c;
}

char pop(){
    if(top == -1){
        return '\0';
    }
    return STACK[top--];
}

int main(){
    char str[MAX_SIZE];
    printf("Enter the string: ");
    scanf("%s", str);
    
    int i = 0, j = 0, check = 0;

    while(str[i] != '\0'){
        push(str[i]);
        i++;
    }

    char k = pop();
    
    while(k != '\0'){
        if(k != str[j]){
            check = 1;
            break;
        }
        j++;
        k = pop();
    }

    if(check == 0) printf("Palindrome String\n");
    else printf("Not a palindrome string\n");


    return 0;
}