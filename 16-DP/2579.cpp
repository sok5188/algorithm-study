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
int dp[301][2];
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
	dp[1][0] = arr[1];
	dp[1][1] = -1;
	dp[2][0] = dp[1][0] + arr[2];
	dp[2][1] = arr[2];
	dp[3][0] = dp[2][1] + arr[3];

	for (int i = 3; i <= n; i++) {
		dp[i][0] = dp[i - 1][1] + arr[i];
		dp[i][1] = max(dp[i - 2][0], dp[i - 2][1]) + arr[i];
	}
	cout << max(dp[n][0], dp[n][1])<<endl;
	return 0;
}