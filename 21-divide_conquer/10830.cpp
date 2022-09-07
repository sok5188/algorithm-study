#include <iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<vector>
#include<cmath>
#include<stdio.h>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<deque>
using namespace std;

#define md 1000;
long long arr[10][10];
long long ans[10][10];

long long n, m;

void mul() {
	long long tmp[10][10];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int cnt = 0;
			for (int x = 0; x < n; x++) {
				cnt += (ans[i][x] * ans[x][j]) % md;
				cnt = cnt % md;
			}
			tmp[i][j] = cnt % md;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			ans[i][j] = tmp[i][j];
		}
	}
}
void one_mul() {

	long long tmp[10][10];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int cnt = 0;
			for (int x = 0; x < n; x++) {
				cnt += (ans[i][x] * arr[x][j]) % md;
				cnt = cnt % md;
			}
			tmp[i][j] = cnt % md;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			ans[i][j] = tmp[i][j];
		}
	}
}
void ptr() {
	cout << "now ans array is :: " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}
}
void sol(long long level) {
	if (level == 2) {
		mul();
		return;
	}
	if (level % 2 == 0) {
		//ptr();

		sol(level / 2);
		//ptr();

		mul();
		//ptr();
	}
	else {
		if (level == 3) {
			//ptr();

			sol(level - 1);
			//ptr();

			one_mul();
			//ptr();
		}
		else {
			//ptr();

			sol(level / 2);
			//ptr();

			mul();
			//ptr();

			one_mul();
			//ptr();
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
			arr[i][j] = arr[i][j] % md;
			ans[i][j] = arr[i][j];
		}
	if (m != 1) {
		sol(m);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}
	

	return 0;
}