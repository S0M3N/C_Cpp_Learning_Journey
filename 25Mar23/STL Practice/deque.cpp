#include<iostream>
#include<deque> //Doublly ended queue

using namespace std;

int main(){
	deque<int> d;

	// adding the element
	d.push_back(12);
	d.push_front(1);

	for(auto i:d){
		cout<<i<<" ";
	}cout<<endl;

	// removing the element usi pop_back() and pop_front()
	// d.pop_front();
	for(auto i:d){
		cout<<i<<" ";
	}cout<<endl;

	// getting value from an index
	cout<<"1st index element : "<<d.at(1)<<endl;

	// front and back
	cout<<"Front : "<<d.front()<<endl;
	cout<<"Back : "<<d.back()<<endl;

	// empty
	cout<<"is empty: "<<d.empty()<<endl;

	// to delete we have to give the requirements
	cout<<"Size before erasing : "<<d.size()<<endl;
	d.erase(d.begin(), d.begin()+1);
	cout<<"Size after erasing : "<<d.size()<<endl;

	for(auto i:d){
		cout<<i<<" ";
	}cout<<endl;

	return 0;
}