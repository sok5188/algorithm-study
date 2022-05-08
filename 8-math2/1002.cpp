#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<numbers>
#include<iomanip>
#include<cmath>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int x1, y1, r1, x2, y2, r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		if (x1 == x2 && y1 == y2 && r1 == r2) {
			cout << "-1" << endl;
			continue;
		}
		double dis = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
		double R = (r2 + r1) * (r2 + r1);
		double r = (r2 - r1) * (r2 - r1);
		if (dis > R||dis<r)	cout << "0" << endl;
		else if (dis ==R||dis==r) cout << "1" << endl;
		else cout << "2" << endl;
		
	}
	
}