
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
	int n, m;
	cin >> n >> m;
	map<string,int> mp1;
	set<string>st1;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		mp1.insert({ s,i });
	}
	int cnt = 0;
	for (int i = 0; i < m; i++) {
		string s;
		cin >> s;
		auto iter = mp1.find(s);
		if (iter != mp1.end()) {
			st1.insert(iter->first);
			cnt++;
		}
	}
	printf("%d\n", cnt);
	for (auto it = st1.begin(); it != st1.end(); it++) {
		string tmp = *it;
		printf("%s\n", tmp.c_str());
	}
	return 0;
}