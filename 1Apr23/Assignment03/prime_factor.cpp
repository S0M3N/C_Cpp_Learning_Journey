#include<bits/stdc++.h>

using namespace std;

void all_prime(int &n){
	while (n % 2 == 0)
    {
        cout << 2 << " X ";
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            cout << i << " X ";
            n = n/i;
        }
    }
    if (n > 2) cout << n <<endl;
}

int main(){
	int n;
	cout<<"Enter the number: ";
	cin>>n;

	all_prime(n);

	return 0;

}