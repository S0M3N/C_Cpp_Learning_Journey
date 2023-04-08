#include <iostream>
#include <climits>

using namespace std;

// case reverse normal is out of range return 0

int revnum(int x){
	int answer = 0;

	while(x != 0){
		int digit = x%10;
		if((answer>INT_MAX/10) || (answer<INT_MIN/10)){
			return 0;
		}
		answer = (answer * 10)+digit;
		x = x/10;
	}

	return answer;
}

int main(){
	int x;
	cin >> x;

	cout<<revnum(x)<<endl;
	return 0;
}