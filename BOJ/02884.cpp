#include <iostream>

using namespace std;

int main() {

	int h, m;
	cin >> h >> m;
	
	int hout = 0, mout = 0;

	if (m < 45) {
		if (h == 0) {
			hout = 23;
		}
		else {
			hout = h - 1;
		}

		mout = m + 60 - 45;
		
	}
	else {
		hout = h; 
		mout = m - 45;
		
	}

	cout << hout << " " << mout << endl;

	return 0;
}