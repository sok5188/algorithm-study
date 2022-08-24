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


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	long long dp[101];
	dp[1] = dp[2] = dp[3] = 1;
	dp[4] = dp[5] = 2;
	for (long long i = 6; i <= 100; i++) {
		dp[i] = dp[i - 1] + dp[i - 5];
	}
	while (t--) {
		long long n;
		cin >> n;

		cout << dp[n] << endl;
	}
	
	
	return 0;
}