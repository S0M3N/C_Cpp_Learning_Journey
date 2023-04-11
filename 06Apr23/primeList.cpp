#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

enum TYPE{
	PRIME_NUMBER,
	COMPOSITE_NUMBER,
	NEITHER_PRIME_NOR_COMPOSITE
};

TYPE is_Prime(const int &num){
	if(num == 1 || num ==0) return NEITHER_PRIME_NOR_COMPOSITE;
	if(num == 2) return PRIME_NUMBER;
	int count = 0;
	for(int i=2; i<=sqrt(num); i++){
		if (num%i == 0){
			count+=1;
		}
	}
	return (count != 0) ? COMPOSITE_NUMBER:PRIME_NUMBER;
}

vector<int> primeList(const int &k){
	vector<int> res;
	int i=0, n=2;
	while(n>0){
		if(i>=k) return res;
		if(is_Prime(n) == PRIME_NUMBER){
			res.push_back(n);
			i++;
		}
		n++;
	}
	return res;
}

int main(){
	int n;
	cin>>n;
	if(n>6000) goto end;
	for(auto i : primeList(n)){
		cout<<i<<" ";
	}
	cout<<endl;
	end:
	return 0;
}
