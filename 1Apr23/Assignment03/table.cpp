#include<bits/stdc++.h>

using namespace std;

void table(const int &n, const int &i){
	for(int j = 1; j<=i; j++) cout<<n<<" X "<<j<<" = "<<n*j<<endl;
}

int main(){
	int n, i;
	cout<<"Enter numebr and desired range: "<<endl;
	cin>>n>>i;
	table(n, i);

	return 0;
}