#include<bits/stdc++.h>

using namespace std;

int power(const int &x, const int &y){
	int res = 1;
	for(int i = 0; i<y; i++){
		res*=x;
	}
	return res;
}

int main(){
	int x,y;
	cout<<"Enter the number and power: ";
	cin>>x>>y;

	cout<<power(x,y)<<endl;

	return 0;
}