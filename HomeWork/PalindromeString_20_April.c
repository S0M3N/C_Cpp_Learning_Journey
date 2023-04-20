// To check if the given string is palindrome or not.
#include<stdio.h>
#define SIZE 20

void push(char *arr, int *t, char c){
    // overflow condition
    if(*t == SIZE-1) return;
    arr[++(*t)] = c;
}

// Pop function
char pop(char *arr, int *t){
    // underflow condition
    if(*t==-1) return '\0';
    return arr[(*t)--];
}

int checkPalaindrome(char *str){
    char arr[SIZE];
    int t = -1;
    int i = 0;

    // creating the stack of the given string
    while(str[i] != '\0'){
        push(arr, &t, str[i]);
        i++;
    }

    // start poping
    i=0;
    char k = pop(arr, &t);

    while (k != '\0')
    {
        // compare with the elements of string from the back
        if (k != str[i])return 0;
        i++;
        k = pop(arr, &t);
    }
    return 1;
}

int main(){
    char str[SIZE];
    printf("Enter the string: ");
    scanf("%s", str);

    (checkPalaindrome(str)) ? printf("Palindrome \n"): printf("Not Palindrome\n");

    return 0;
}