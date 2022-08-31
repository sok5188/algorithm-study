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

long long s[1004];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long n, m;
	scanf_s("%d %d", &n, &m);
	long long sum = 0;
	s[0] = 0;
	for (int i = 1; i <= n; i++) {
		int tmp;
		scanf_s("%d", &tmp);
		sum += tmp;
		s[sum%m]++;
	}
	long long cnt = 0;
	for (int i = 0; i <= m; i++) {
		cnt += (s[i] - 1) * s[i] / 2;
	}
	cout << cnt+s[0] << endl;

	return 0;
}