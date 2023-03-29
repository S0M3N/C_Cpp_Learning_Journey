#include<iostream>

using namespace std;

int main(){
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	if(n%2 == 0){
		cout<<"Even"<<endl;
		return 0;
	}
	cout<<"Odd"<<endl;
	return 0;
}