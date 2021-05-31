#include <bits/stdc++.h>
using namespace std;

bool check(int b[8][8], int x, int y) {


	for (int i = y; i > 0; i--)
		if (b[x][i-1] != 0) return false;
    int a = x;
	for (int i = y; i > 0; i--) {
		if (b[a-1][i-1] != 0 && a > 0) return false;
		a--;
	}

	a = x+1;
	for (int i = y; i > 0; i--) {
		if (b[a][i-1] != 0 && a < 8) return false;
		a++;
	}

	return true;
}

void output(int b[8][8]) {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++)
			cout << b[i][j] << " ";
		cout << endl;
	}
}

bool backtracking(int b[8][8], int col) {
	if (col > 7) return true;
	for (int i = 0; i < 8; i++) {
			if(check(b, i, col)) {
				b[i][col] = 1;
				if (backtracking(b, col + 1)) return true;
				b[i][col] = 0;
			}
	}
	return false;
}

int main() {
	int b[8][8] = {};
	backtracking(b, 0);
	cout<<"cach dat 8 quan hau la: \n";
	output(b);
	return 0;
}
