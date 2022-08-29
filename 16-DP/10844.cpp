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
long long dp[101][10];

#define mod 1000000000

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	for (int i = 1; i <= 9; i++)
		dp[1][i] = 1;
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= 9; j++) {
			long long sum = 0;
			if (j != 0)
				sum += dp[i - 1][j - 1];
			if (j != 9)
				sum += dp[i - 1][j + 1];
			dp[i][j] = sum % mod;
		}
	}
	long long ans = 0;
	for (int i = 0; i <= 9; i++)
		ans = (ans + dp[n][i]) % mod;
	
	cout << ans << endl;
	return 0;
}