#include<iostream>

using namespace std;

int main(){
	int year;
	cout<<"Enter the year: ";
	cin>>year;

	if(year % 4 == 0){
		if(year % 100 == 0){
			if(year % 400 == 0){
				cout<<"Leap century year";
				return 0;
			}
		}
		cout<<"Leap but not century";
		return 0;
	}
	cout<<"Not leap";
	return 0;
}