#include <iostream>

using namespace std;


void binary(int);
int x1, x2;

int main(void) {
	int number;

    while (true)
	{
        cout << "First positive integer: ";
        cin >> x1;

        cout << "Second positive integer: ";
        cin >> x2;

        binary(x1);
        cout << endl;

        binary(x2);
        cout << endl;
	}
	return 0;
}

void binary(int number) {
	int remainder;

	if(number <= 1)
	{
		cout << number;
		return;
	}

	remainder = number%2;
	binary(number >> 1);
	cout << remainder;
}
