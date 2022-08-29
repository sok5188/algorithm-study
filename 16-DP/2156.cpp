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

int arr[10001];
int dp[10001][3];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	int ans = 0;
	dp[1][0] = arr[1];
	dp[1][1] =dp[1][2] =dp[2][2] = -1;
	if (n == 1) {
		cout << arr[1] << endl;
		return 1;
	}
	dp[2][0] = dp[1][0] + arr[2];
	dp[2][1] = arr[2];
	if (n == 2) {
		ans = arr[1] + arr[2];
		cout << ans << endl;
		return 2;
	}
	dp[3][2] = arr[3];
	dp[3][0] = dp[2][1] + arr[3];
	dp[3][1] = dp[1][0]+ arr[3];
	if (n == 3) {
		ans = max(dp[3][0], max(dp[3][1], dp[3][2]));
		if (ans > dp[2][0])
			cout << ans << endl;
		else
			cout << dp[2][0] << endl;
		return 3;
	}
	for (int i = 4; i <= n; i++) {
		dp[i][0] = max(dp[i - 1][1],dp[i-1][2]) + arr[i];
		dp[i][1] = max(dp[i - 2][0], max(dp[i - 2][1],dp[i-2][2])) + arr[i];
		dp[i][2] = max(dp[i - 3][0], max(dp[i - 3][1], dp[i - 3][2])) + arr[i];
		if (ans < max(dp[i][2],max(dp[i][0], dp[i][1])))
			ans = max(dp[i][2], max(dp[i][0], dp[i][1]));
	}
	cout << ans << endl;
	return 0;
}