#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main(){
    string text;
    int check = 1, j= 0;
    stack<char> STACK;
    cout<<"Enter the string: ";
    cin>>text;
    for(auto i: text){
        STACK.push(i);
    }

    while(STACK.size()>0){
        if(STACK.top() != text.at(j)) check=0;
        STACK.pop();
        j++;
    }

    (check) ? cout<<"Palindrome": cout<<"Not palindrome"<<endl;

    return 0;
}