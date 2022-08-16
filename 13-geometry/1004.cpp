
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
typedef struct {
	int x, y, r;
}circle;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while (t--) {

		int x1, x2, y1, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		int n;
		cin >> n;
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			int x,y,r;
			cin >> x >> y >> r;
			//calculate formula
			if ((x1 - x) * (x1 - x) + (y1 - y) * (y1 - y) <= r * r) {
				//start point is in this circle
				if ((x2 - x) * (x2 - x) + (y2 - y) * (y2 - y) <= r * r) {
					//doesn't matter not count
				}
				else {
					//it is matter have to count
					cnt++;
				}
			}
			else if ((x2 - x) * (x2 - x) + (y2 - y) * (y2 - y) <= r * r) {
				//이미 if에서 곂치는 건 제외시켰으니.. count!
				cnt++;
			}
		}
		cout << cnt<< endl;
	}

	return 0;
}