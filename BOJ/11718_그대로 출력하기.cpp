#include <iostream>
#include <string>
using namespace std;

int main() {

	string a;
	while (1) {
		getline(cin, a);
		if (a == " " || a.empty() || a == "/n") {
			break;
		}
		cout << a << endl;
	}
	return 0;
}