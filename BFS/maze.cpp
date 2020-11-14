/*
5
1 1 1 1 1
0 0 0 0 1
1 1 1 1 1
1 0 0 1 0
1 1 1 1 1
*/

#include <iostream>
#include <string>
#include <queue>
using namespace std;

int mapping[101][101] = { 0, };
int visited[101][101] = { 0, };
int input;


bool check(int y, int x) {
	if (y < 1 || y > input || x < 1 || x > input) {
		return false;
	}
	if (visited[y][x] == 1) {
		return false;
	}
	if (mapping[y][x] == 0) {
		return false;
	}

	return true;
}


int main() {

	cin >> input;

	for (int i = 1; i <= input; i++) { //y
		for (int j = 1; j <= input; j++) {// x
			cin >> mapping[i][j];
		}
	}

	int count = 0;
	queue<int> qy, qx, qc;
	qy.push(1);
	qx.push(1);
	qc.push(1);

	while (!qy.empty()) {
		int cy = qy.front();
		qy.pop();
		int cx = qx.front();
		qx.pop();
		int cc = qc.front();
		qc.pop();

		if (visited[cy][cx] == 1) {
			continue;
		}

		visited[cy][cx] = 1;

		if (cy == input && cx == input) {
			count = cc;
			break;
		}

		//상
		if (check(cy - 1, cx)) {
			qy.push(cy - 1);
			qx.push(cx);
			qc.push(cc + 1);
		}
		//하
		if (check(cy + 1, cx)) {
			qy.push(cy + 1);
			qx.push(cx);
			qc.push(cc + 1);
		}
		//좌
		if (check(cy, cx - 1)) {
			qy.push(cy);
			qx.push(cx - 1);
			qc.push(cc + 1);
		}
		//우
		if (check(cy, cx + 1)) {
			qy.push(cy);
			qx.push(cx + 1);
			qc.push(cc + 1);
		}
	}
	cout << count << endl;

	return 0;
}
