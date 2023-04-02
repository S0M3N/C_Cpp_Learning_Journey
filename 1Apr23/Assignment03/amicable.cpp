#include <bits/stdc++.h>

using namespace std;

int sum_div(int n)
{
	int result = 0;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			if (i == (n / i))
				result += i;
			else
				result += (i + n/i);
		}
	}
	return (result + 1);
}

bool isAmicable(int x, int y)
{
	if (sum_div(x) != y)
	return false;

	return (sum_div(y) == x);
}

int main() {
	int x , y;
	cout<<"Enter the numbers: ";
	cin>>x>>y;
	if (isAmicable(x, y)) cout << "Yes";
	else cout << "No";
	return 0;
}
