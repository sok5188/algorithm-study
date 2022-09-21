#include <iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<cmath>
#include<stdio.h>
#include<queue>
#include<functional>
using namespace std;


long long arr[501][501];
long long dp[501][501];
pair<long long,long long> ptdp[501][501];
int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int a, b;
		cin >> a >> b;
		ptdp[i][i] = { a,b };
	}
	for (int i = 1; i < n; i++) {
		// i는 구간의 길이 
		for (int j = 1; j <= n - i; j++) {
			//j는 탐색 시작 지점의 idx
			dp[j][i + j]=INT32_MAX;
			ptdp[j][i + j] = { INT32_MAX,INT32_MAX };
			for (int k = j; k < j + i; k++) {
				if (dp[j][j + i] > dp[j][k] + dp[k + 1][i + j] + ptdp[j][k].first * ptdp[j][k].second * ptdp[k + 1][i + j].second) {
					dp[j][j + i] = dp[j][k] + dp[k + 1][i + j] + ptdp[j][k].first * ptdp[j][k].second * ptdp[k + 1][i + j].second;
					ptdp[j][j + i] = { ptdp[j][k].first,ptdp[k + 1][j + i].second };
				}
				
			}
		}
	}
	cout << dp[1][n] << endl;
	return 0;
}