#include <iostream>

using namespace std;

int main() {
	
	int input;

	cin >> input;

	int* a = new int[input];
	int* b = new int[input];

	for (int i = 0; i < input; i++) {
		cin >> a[i] >> b[i];
	}

	for (int i = 0; i < input; i++)
	{
		cout << "Case #" << i + 1 << ": " << a[i] << " + " << b[i] << " = " << a[i] + b[i] << endl;;

	}
	

	return 0;
}