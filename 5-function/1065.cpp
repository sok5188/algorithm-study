#include <iostream>
using namespace std;
bool is_hans(int n) {
	int dis = -1;
	bool first_time = true;
	while (1) {
		if (n < 10) {
			// han number
			return true;
		}
		int big, small;
		big = n % 10;
		small = (int)(n / 10) % 10;
		int now_dis = big - small;
		if (first_time) {
			first_time = false;
			dis = now_dis;
		}
		if (now_dis == dis) {
			dis = now_dis;
			n = n / 10;
		}
		else {
			// not han number
			return false;
		}
	}
}
int main() {
	int n;
	cin >> n;
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		if (i < 100)   cnt++;
		else {
			if (is_hans(i))   cnt++;
			else continue;
		}
	}
	cout << cnt << endl;

	return 0;
}