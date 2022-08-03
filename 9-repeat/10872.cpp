#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<numbers>
#include<iomanip>
#include<cmath>
using namespace std;
int fact(int n) {
	if (n == 1) {
		return 1;
	}
	return n * fact(n - 1);
}
int main() {
	int n;
	cin >> n;
	if (n == 0) {
		cout << "1" << endl;
		return -1;
	}
	int ans = fact(n);
	cout << ans << endl;
	return 0;
}