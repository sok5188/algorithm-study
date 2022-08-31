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

int s[100001];
int arr[100001];
pair<int,int> dp[1001];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	
	int n, m;
	cin >> n >> m;
	int sum = 0;
	s[0] = 0;
	for (int i = 1; i <= n; i++) {
		int tmp;
		cin >> tmp;
		sum += tmp;
		s[i] = sum;
	}
	int mx = INT32_MIN;
	for (int i = 0; i <=n- m; i++) {
		int tmp = s[i + m] - s[i];
		mx = max(mx, tmp);
	}
	cout << mx << endl;
		
	
	return 0;
}