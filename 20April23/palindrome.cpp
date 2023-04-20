#include<iostream>
#include<stack>
#include<string>

using namespace std;

bool checkPalin(string text){
    int j = 0;
    stack<char> STACK;

    for(auto i: text){
        STACK.push(i);
    }

    while(STACK.size()>0){
        if(STACK.top() != text.at(j)) return 0;
        STACK.pop();
        j++;
    }

    return 1;
}

int main(){
    string text;
    cout<<"Enter the string: ";
    cin>>text;

    (checkPalin(text)) ? cout<<"Palindrome\n": cout<<"Not palindrome\n";

    return 0;
}