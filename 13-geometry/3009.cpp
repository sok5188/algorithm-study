
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
int ss(int a, int b, int c) {
	if (a == b) {
		return c;
	}
	else {
		if (c == a) {
			return b;
		}
		return a;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int x1, y1, x2,y2,x3,y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	int x,y;
	x = ss(x1, x2, x3);
	y = ss(y1, y2, y3);
	cout << x << " " << y;
	return 0;
}