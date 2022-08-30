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

pair<int,int> arr[101];
int dp[101];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> arr[i].first>>arr[i].second;
	}
	dp[1] = 1;
	int mx = 1;
	sort(arr+1, arr + n+1);
	/*for (int i = 1; i <= n; i++)
		cout << arr[i].first << "  /  " << arr[i].second << endl;*/
	for (int i = 2; i <= n; i++) {
		dp[i] = 1;
		for (int j = 1; j < i; j++) {
			if(arr[i].second > arr[j].second)
				dp[i] = max(dp[i], dp[j] + 1);
		}
	
		mx = max(dp[i], mx);
	}
	/*
	for (int i = 2; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			if (arr[i].first < arr[j].first &&arr[i].second < arr[j].second) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}

		mx = max(dp[i], mx);
	}*/
	cout << n-mx << endl;
	return 0;
}