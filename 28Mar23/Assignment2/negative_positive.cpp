#include<iostream>

using namespace std;

int main(){
	int num;
	cout<<"Enter the number: ";
	cin>>num;
	if(num<0){
		cout<<"Negative"<<endl; return 0;
	}
	else if(num>0){
		cout<<"Positive"<<endl; return 0;
	}
	cout<<"Zero";
	return 0;
}