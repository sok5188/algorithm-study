#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<numbers>
#include<iomanip>
#include<cmath>
using namespace std;
char arr[3000][3000]={'*',};


void init(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = '*';
		}
	}
}
void blank(int n, int x, int y) {
	for (int i = x; i < x+n; i++) {
		for (int j = y; j < y+n; j++) {
			arr[i][j] = ' ';
		}
	}
}
void re(int n,int x, int y) {
	if (n == 3) {
		arr[x + 1][y + 1] = ' ';
	}
	else {
		n = n / 3;
		re(n, x, y);
		re(n, x+n, y);
		re(n, x+2*n, y);

		re(n, x, y+n);
		blank(n, x + n, y + n);
		re(n, x+2*n, y+n);

		re(n, x, y+2*n);
		re(n, x+n, y + 2 * n);
		re(n, x + 2 * n, y + 2 * n);

	}
}
int main() {
	int n;
	cin >> n;
	init(n);
	re(n, 0, 0);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j];
		}
		if (i != n - 1) {
			cout << endl;
		}
			
	}
	return 0;
}