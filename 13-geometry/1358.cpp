
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
	int w, h, x, y, p;
	cin >> w >> h >> x >> y >> p;
	int cnt = 0;
	for (int i = 0; i < p; i++) {
		int x1, y1;
		cin >> x1 >> y1;
		//check left half circle
		if ((x1 - x) * (x1 - x) + (y1 - y - h / 2) * (y1 - y - h / 2) <= (h / 2) * (h / 2)) {
			cnt++;
		}
		else if((x1-x-w)* (x1 - x - w)+(y1-y-h/2)* (y1 - y - h / 2)<= (h / 2) * (h / 2)) {
			cnt++;
		}
		else if ((x1 >= x && x1 <= x + w) && (y1 >= y && y1 <= y + h))
			cnt++;
	}
	cout << cnt << endl;
	return 0;
}