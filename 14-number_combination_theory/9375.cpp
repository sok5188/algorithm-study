
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
	
	while (t--) {
		int n;
		cin >> n;
		map<string, int> mp;
		string a, b;
		for (int i = 0; i < n; i++) {
			cin >> a >> b;
			if (mp.find(b) != mp.end()) {
				//already exist
				mp[b]++;
			}
			else {
				mp.insert({ b,1 });
			}
		}
		int ans = 1;
		for (auto it = mp.begin(); it != mp.end(); it++) {
			ans *= it->second + 1;
		}
		cout << ans - 1 << endl;

	}
	
	
	
	
	return 0;
}