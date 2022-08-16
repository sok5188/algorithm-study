
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
	while (true) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a == 0 || b == 0 || c == 0)
			break;
		int mx = max(a, max(b, c));
		bool flag = false;
		if (mx == a) {
			if (a * a == b * b + c * c)
				flag = true;
		}
		else if (mx == b) {
			if (b * b == a * a + c * c)
				flag = true;
		}
		else {
			if (c * c == a * a + b * b)
				flag = true;
		}
		if (flag)
			cout << "right" << endl;
		else
			cout << "wrong" << endl;
	}
	return 0;
}