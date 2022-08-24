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

	long long n;
	cin >> n;
	vector<int> dp;
	dp.push_back(0);
	dp.push_back(1);
	dp.push_back(2);
	for (long long  i = 3; i <= n; i++) {
		dp.push_back((dp[i - 1] + dp[i - 2])%15746);
	}

	cout << dp[n]%15746 << endl;
	
	return 0;
}