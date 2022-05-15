#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<numbers>
#include<iomanip>
#include<cmath>
using namespace std;
int fibo(int n) {
	if (n == 1 || n == 2)
		return 1;
	return fibo(n - 1) + fibo(n - 2);
}
int main() {
	int n;
	cin >> n;
	if (n == 0) {
		cout << "0" << endl;
		return 0;
	}
	int ans = fibo(n);
	cout << ans << endl;
	return 0;
}