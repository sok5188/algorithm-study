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
typedef struct Paint {
	int R, G, B;
};
//풀이를 보고 쉽게 이해하긴 했지만 그래도 어떻게 풀어야 할 지 생각이 안나던 문제
//그냥 단순히 경우의수를 나누기만 해주면 되는 문제임..
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	Paint pt[1001];
	int dp[1001][3]; // R,G,B > 0,1,2
	for (int i = 1; i <= n; i++) {
		int r, g, b;
		cin >> r >> g >> b;
		pt[i].R = r;
		pt[i].G = g;
		pt[i].B = b;
	}
	dp[1][0] = pt[1].R;
	dp[1][1] = pt[1].G;
	dp[1][2] = pt[1].B;

	for (int i = 2; i <= n; i++) {
		dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + pt[i].R;
		dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + pt[i].G;
		dp[i][2] = min(dp[i - 1][1], dp[i - 1][0]) + pt[i].B;
	}
	cout << min(min(dp[n][0], dp[n][1]), dp[n][2]);
	return 0;
}