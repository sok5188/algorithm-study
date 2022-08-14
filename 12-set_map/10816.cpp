
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
	int n, m, p, q;
	scanf("%d", &n);
	map<int,int> mp;
	for (int i = 0; i < n; i++) {

		scanf("%d", &m);
		if (mp.find(m) == mp.end()) {
			//firt time
			mp.insert({ m,1 });
		}
		else {
			mp[m]++;
		}
	}
	scanf("%d", &p);
	for (int i = 0; i < p; i++) {
		scanf("%d", &q);
		int cnt = 1;
		auto iter = mp.find(q);
		if (iter != mp.end()) {
			printf("%d ", iter->second);
		}
		else {
			printf("0 ");
		}

		
	}
	
	return 0;
}