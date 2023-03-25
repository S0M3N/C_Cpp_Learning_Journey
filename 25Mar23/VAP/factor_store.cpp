#include<iostream>
#include<vector>

using namespace std;

int main(){
	int x, c, R, i=0;
	vector<int> fac;
	char ch;

	// taking the input from the user
	cout << "Enter a number: ";
	cin >> x;

	// finding and storing the factors
	for(c=1; c<=x; c++){
		R = x%c;
		if(R == 0){
			fac.push_back(c);
			i++;
		}
	}

	// iterrating and printing value from the array
	cout<<"Factors are: \n";
	for (auto j = fac.begin(); j != fac.end(); j++){
        cout << *j << " ";
	}
	return 0;
}