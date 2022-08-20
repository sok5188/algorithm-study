
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
#define div 10007
int dp[1001][1001];
int gcd(int a, int b) {
	int r;
	while (b != 0) {
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	dp[0][0] = dp[0][1] = dp[1][0] = dp[1][1] = 1;
	while (t--) {
		int n, r;
		cin >> r >> n;
		if (r == n || r == 0)
			cout << "1" << endl;
		else {

			for (int i = 2; i <= n; i++) {
				dp[i][0] = dp[i][i] = 1;
				for (int j = 1; j < n; j++) {
					dp[i][j] = (dp[i - 1][j] +  dp[i - 1][j - 1]);
				}
			}
			cout << dp[n][r] << endl;
		}

	}
	
	
	
	
	return 0;
}