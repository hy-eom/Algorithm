#include <iostream>
using namespace std;

int main() {

	int data[3];
	int temp;
	for (int i = 0; i < 3; i++) {
		cin >> data[i];
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			if (data[j] > data[j + 1]) {
				temp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 3; i++) {
		cout << data[i] << " ";
	}


	return 0;
}