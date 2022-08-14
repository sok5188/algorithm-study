
#include <iostream>
#include<algorithm>
#include<cstring>
#include<vector>
#include<cmath>
#include<stdio.h>
using namespace std;
bool compare(pair<int, pair<string, int>> a, pair<int, pair<string, int>> b) {
	if ( a.first== b.first) {
		return b.second.second < a.second.second;
	}
	return a.first > b.first;
}
int main()
{
	int n;
	cin >> n;
	vector<pair<int, pair<string,int>>> p;

	for (int i = 0; i < n; i++) {
		int a;
		string tmp;
		cin >>a>> tmp;
		p.push_back(make_pair(a, make_pair(tmp,i)));
	}
	sort(p.begin(),p.end(), compare);
	for (int i = n-1; i >=0; i--) {
		printf("%d %s\n", p[i].first, p[i].second.first.c_str());
	}
		
	return 0;
}