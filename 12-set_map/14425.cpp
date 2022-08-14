
#include <iostream>
#include<algorithm>
#include<cstring>
#include<vector>
#include<cmath>
#include<stdio.h>
#include<set>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m;
	cin >> n>>m;
	set<string> s1;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		s1.insert(s);
	}
	int cnt = 0;
	for (int i = 0; i < m; i++) {
		string s;
		cin >> s;
		if (s1.find(s) != s1.end()) {
			cnt++;
		}
	}
	printf("%d\n", cnt);
	return 0;
}