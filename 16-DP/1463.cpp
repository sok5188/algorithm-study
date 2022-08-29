#include <iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<vector>
#include<cmath>
#include<stdio.h>
#include<set>
#include<map>
using namespace std;

int arr[301];
int dp[1000001];
bool isdiv3(int num) {
	if (num % 3 == 0)
		return true;
	return false;
}
bool isdiv2(int num) {
	if (num % 2 == 0)
		return true;
	return false;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	if (n == 1) {
		cout << "0" << endl;
		return -1;

        //백준에서는 exit 코드가 0이 아니면 안되는것..
	}
	dp[1]=dp[2]=dp[3] = 1;
	for (int i = 4; i <= n; i++) {
		int a, b, c;
		a = b = c = INT32_MAX;
		if (i % 3 == 0) {
			a = dp[i / 3] + 1;
		}
		if (i % 2 == 0) {
			b = dp[i / 2] + 1;
		}
		c = dp[i - 1] + 1;
		dp[i] = min(a, min(b, c));
	}
	cout << dp[n] << endl;
	return 0;
}