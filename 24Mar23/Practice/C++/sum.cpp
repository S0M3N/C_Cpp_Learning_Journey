#include <iostream>
#include <limits>

using namespace std;

int main() {
    int a, b, sum;
    char c;

	input1:
    cout << "Enter 1st number: ";
    if(cin >> a) {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } else {
        cout << "Invalid input. Please try again." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        goto input1;
    }

	input2:
    cout << "Enter 2nd number: ";
    if(cin >> b) {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } else {
        cout << "Invalid input. Please try again." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        goto input2;
    }

    sum = a + b;
    cout << "The sum is: " << sum << endl;
    return 0;
}
