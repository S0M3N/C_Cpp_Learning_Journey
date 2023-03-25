#include<iostream>
#include<stack>

using namespace std;

int main(){

	stack<string> s;
	s.push("Somen");
	s.push("S.");
	s.push("Samanta");

	cout<<"Top Element : "<<s.top()<<endl;

	s.pop();
	cout<<"Top Element : "<<s.top()<<endl;

	cout<<"Size of stack : "<<s.size()<<endl;

	return 0;
}