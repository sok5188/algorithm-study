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

int arr[1001];
int dp[1001];
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
	dp[1] = 1;
	int mx = 1;
	for (int i = 2; i <= n; i++) {
		dp[i] = 1;
		for (int j = 1; j < i; j++) {
			if (arr[i] > arr[j]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		//i 이전에 그대로 검사하고
		// i 이후에는 단순히 i보다 작은애들만 더한다? X
		// 5 3 4 2 1이면 다더하게되는데 그러면 안되는거지/../
		mx = max(dp[i], mx);
	}
	for (int i = 2; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			if (arr[i] < arr[j]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		//i 이전에 그대로 검사하고
		// i 이후에는 단순히 i보다 작은애들만 더한다? X
		// 5 3 4 2 1이면 다더하게되는데 그러면 안되는거지/../
		mx = max(dp[i], mx);
	}
	cout << mx << endl;
	return 0;
}