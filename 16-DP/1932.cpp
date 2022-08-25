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

int arr[501][501];
int dp[501][501];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cin >> arr[i][j];
			//i층에는 i개의 원소가 있음
		}
	}
	dp[1][1] = arr[1][1];
	for (int i = 2; i <= n; i++) {
		dp[i][1] = dp[i - 1][1]+arr[i][1];
		for (int j = 2; j < i; j++) {
			dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + arr[i][j];
		}
		dp[i][i] = dp[i - 1][i - 1] + arr[i][i];
	}
	int mx = 0;
	for (int i = 1; i <= n; i++) {
		if (mx < dp[n][i])
			mx = dp[n][i];
	}
	cout << mx << endl;
	return 0;
}