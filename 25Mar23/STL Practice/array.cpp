#include<iostream>
#include<array>

using namespace std;

int main(){
	array<int, 4> a = {1,2,3,4};

	int size = a.size();
	for(int i=0; i<size; i++) cout<< a[i] <<endl;

	// is empty
	cout << "if empty : ";
	if(a.empty()){
		cout << "yes" << endl;
	}else{
		cout << "no" << endl;
	}

	// at index
	cout << "at index 3 : " << a.at(3) << endl;

	// first and last element
	cout <<"First Element: "<< a.front() << "\nLast element: " << a.back();

	return 0;
}