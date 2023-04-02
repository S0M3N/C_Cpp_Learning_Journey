#include<iostream>

using namespace std;

int gcd(int x, int y){
	int gcd, i, j;
	for (i = 1; i <= x && i <= y; i++)
   	{
    	if (x % i == 0 && y % i == 0) gcd = i;
   	}
   	return gcd;
}

int main(){
	int x, y;
	cout<<"Enter numbers: ";
	cin>>x>>y;
	cout<<gcd(x,y);

	return 0;
}