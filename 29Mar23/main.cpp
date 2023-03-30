#include <iostream>
#include "CtoF.cpp"
#include "rectangle.cpp"
#include "circle.cpp"
#include "si.cpp"
#include "comp.cpp"

using namespace std;

int menu(){
	int choice;
	cout<<"1. Area of circle\n"<<"2. Area of rectangle\n"<<"3.  Simple Interest\n"<<"4. Compound Interest\n"<<"5. Celsius To Fahrenheit\n"<<"Enter your choice: ";
	cin>>choice;
	return choice;
}

int work(){
	int choice;
	restart:
	choice = menu();
	int rad, p, t, n, l, b;
	float r, c;
	switch(choice){
	case 1:
		cout<<"Enter radius of circle: ";
		cin>>rad;
		cout<<"Area: "<<cir_area(rad)<<endl;
		break;
	case 2:
		cout<<"Enter length: ";
		cin>>l;
		cout<<"Enter breadth: ";
		cin>>b;
		cout<<"Area: "<<rect_area(l,b)<<endl;
		break;
	case 3:
		cout<<"Enter Principle Value: ";
		cin>>p;
		cout<<"Enter rate: ";
		cin>>r;
		cout<<"Enter time: ";
		cin>>t;
		cout<<"Simple Interest: "<<simple_int(p,r,t)<<endl;
		break;
	case 4:
		cout<<"Enter Principle Value: ";
		cin>>p;
		cout<<"Enter rate: ";
		cin>>r;
		cout<<"Enter time: ";
		cin>>t;
		cout<<"Enter number of time interest applied anually: ";
		cin>>n;
		cout<<"Compound Interest: "<<comp_int(p,r,n,t)<<endl;
		break;
	case 5:
		cout<<"Enter temprature in degree C: ";
		cin>>c;
		cout<<"Temprature in degree F: "<<celsiusToFahrenheit(c)<<endl;
		break;
	default:
		cout<<"invalid Input";	
		goto restart;	
	}
	return 0;
}

int main(){
	work();
	return 0;
}
