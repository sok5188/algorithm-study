
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
	
	set<int>st1,st2;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		st1.insert(tmp);
	}
	int cnt = 0;
	for (int i = 0; i < m; i++) {
		int tmp;
		cin >> tmp;
		auto iter = st1.find(tmp);
		if (iter != st1.end()) {
			//st1.insert(iter->first);
			cnt++;
		}
	}
	printf("%d\n", n+m-2*cnt);
	/*for (auto it = st1.begin(); it != st1.end(); it++) {
		string tmp = *it;
		printf("%s\n", tmp.c_str());
	}*/
	return 0;
}