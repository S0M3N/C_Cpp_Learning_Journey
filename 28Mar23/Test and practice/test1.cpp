#include<iostream>

using namespace std;

int main(){
	const int x = 10;
	int &r = x;
	r = 25;
	cout<<x<<r;
	return 0;
}