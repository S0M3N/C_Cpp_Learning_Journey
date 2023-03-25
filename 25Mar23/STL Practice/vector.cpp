#include<iostream>
#include<vector>
/* 
a vector is a dynamic array and when filled completely 
then new vector of double Capacity is formed with the copy of previous vector 
*/

using namespace std;

int main(){

	vector<int> v;
	cout<<"Capacity : "<<v.capacity()<<endl;

	// push_back() function is used to add the value into the vector in cpp
	v.push_back(12);
	// capacity() function help to get the capacity of a vector
	cout<<"Capacity : "<<v.capacity()<<endl;

	v.push_back(1);
	cout<<"Capacity : "<<v.capacity()<<endl;

	v.push_back(4);
	cout<<"Capacity : "<<v.capacity()<<endl;
	// size() function give the current size of the vector
	cout<<"Size : "<<v.size()<<endl;

	// for element at a position we can use at() function or [] brackets
	cout<<"Element at index 2 : "<<v.at(2)<<endl;

	// front and back;
	cout<<"Front element : "<<v.front()<<endl;
	cout<<"Last element : "<<v.back()<<endl;

	// pop from last using pop_back() function
	v.pop_back();
	cout<<"Last element : "<<v.back()<<endl;

	// clear vector this only clear the size of vector not the capacity
	cout<<"Size before clear : "<<v.size()<<endl;
	v.clear();
	cout<<"Size after clear : "<<v.size()<<endl;

	// we can initialize the size of vector with a default element using var(size, ele)
	vector<int> a(5,1); //initialize a vector of size 5 (not capacity) with all element 1
	for(auto i:a){
		cout<<i<<" ";
	}cout<<endl;

	// copy to a vector
	vector<int> cp(a);
	for(auto i:cp){
		cout<<i<<" ";
	}cout<<endl;


	return 0;
}