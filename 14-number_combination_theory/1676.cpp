
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
	int n;
	cin >> n;
	int two, five;
	two = five = 0;
	for (int j = 1; j <= n; j++) {
		int i = j;
		while (true) {
			if (i % 2 == 0) {
				i = i / 2;
				two++;
			}
			else if (i % 5 == 0) {
				i = i / 5;
				five++;
			}
			else if (i == 1)
				break;
			else
				break;
		}
		
	}
	cout << min(two, five) << endl;
	return 0;
}