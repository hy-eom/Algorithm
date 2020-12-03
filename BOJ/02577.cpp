#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {

	int a, b, c;
	cin >> a >> b >> c;

	int num = a * b * c;
	string numstring = to_string(num);

	vector<int> vec;
	for (int i = 0; i < 10; i++) {
		vec.push_back(0);
	}

	//cout << vec.size();

	for (int i = 0; i < numstring.length(); i++) {
		int x = numstring[i] - '0';
		vec[x]++;
	}


	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << endl;
	}
	return 0;
}