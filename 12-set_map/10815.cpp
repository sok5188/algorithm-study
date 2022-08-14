
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
	int n,m,p,q;
	cin >> n;
	set<int> s1;
	for (int i = 0; i < n; i++) {
		
		cin >> m;
		s1.insert(m);
	}
	cin >> p;
	for (int i = 0; i < p; i++) {
		cin >> q;
		if (s1.find(q) != s1.end()) {
			printf("1 ");
		}
		else
			printf("0 ");
	}

	return 0;
}