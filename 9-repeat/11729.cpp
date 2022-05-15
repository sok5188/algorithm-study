#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<numbers>
#include<iomanip>
#include<cmath>
using namespace std;

int hanoi(int n) {
	if (n == 1)
		return 1;
	return 2 * hanoi(n - 1) + 1;
}
void process(int n,int t1, int t2) {
	if (n == 1) {
		printf("%d %d\n", t1, t2);
		return;
	}
	int tmp;
	if (t1 * t2 == 2) {
		tmp = 3;
	}
	else if (t1* t2 == 3) {
		tmp = 2;
	}
	else {
		tmp = 1;
	}
	// A to B n-1개
	process(n - 1, t1, tmp);
	// A to C 1개
	process(1, t1, t2);
	// B to C n-1개
	process(n - 1, tmp, t2);
}
int main() {
	int n;
	cin >> n;
	int ans = hanoi(n);
	cout << ans << endl;
	process(n, 1, 3);
	return 0;
}