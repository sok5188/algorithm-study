
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
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	int dis1, dis2, dis3, dis4;
	dis1 = x;
	dis2 = w - x;
	dis3 = y;
	dis4 = h - y;
	int ans = min(min(dis1, dis2), min(dis3, dis4));
	cout << ans;
	return 0;
}