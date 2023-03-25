#include<iostream>
#include<list>

// no direct access possible

using namespace std;
int main(){

	list<int> l;

	l.push_back(1);
	l.push_front(2);

	for(auto i: l){
		cout<< i <<" ";
	}cout<<endl;

	l.erase(l.begin());

	cout<<"After erase"<<endl;
	for(auto i: l){
		cout<< i <<" ";
	}cout<<endl;

	cout<<"Size of list: "<<l.size()<<endl; 

	return 0;
}