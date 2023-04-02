#include<iostream>
#include<cmath>

using namespace std;

enum TYPE{
	PRIME_NUMBER,
	COMPOSITE_NUMBER,
	NEITHER_PRIME_NOR_COMPOSITE
};
TYPE isPrime(const int &num){
	if(num == 1 || num ==0) return NEITHER_PRIME_NOR_COMPOSITE;
	if(num == 2) return PRIME_NUMBER;
	for(int i=2; i<=pow(num, 0.5); i++){
		if (num%i == 0){
			return COMPOSITE_NUMBER;
		}
	}
	return PRIME_NUMBER;
}

TYPE is_Prime(const int &num){
	if(num == 1 || num ==0) return NEITHER_PRIME_NOR_COMPOSITE;
	if(num == 2) return PRIME_NUMBER;
	int count = 0;
	for(int i=2; i<=pow(num, 0.5); i++){
		if (num%i == 0){
			count+=1;
		}
	}
	return (count != 0) ? COMPOSITE_NUMBER:PRIME_NUMBER;
}

int main(){
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	if(is_Prime(n) == PRIME_NUMBER) cout<<"PRIME NUMBER"<<endl;
	else if(is_Prime(n) == COMPOSITE_NUMBER) cout<<"COMPOSITE NUMBER"<<endl;
	else cout<<"NEITHER PRIME NOR COMPOSITE"<<endl;
	return 0;
}