#include <bits/stdc++.h>

using namespace std;

long long fact(const int &n){
	if(n==0 || n==1) return 1;
	return n*fact(n-1);
}

int main(){
	int n;
	cout<<"Enter the numebr : ";
	cin>>n;

	cout<<fact(n)<<endl;

	return 0;
}