
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
	int cham;
	cin >> cham;
	char before_way = ' ';
	int before_dis = 0;
	int ans = 0;
	int L, H;
	L = H = 0;
	bool firstin = false;
	char firstway = ' ';
	int firstdis = 0;
	for (int i = 0; i < 6; i++) {
		int way, dis;
		cin >> way >> dis;
		switch (way)
		{
		case 1:
			//R
			if (!firstin) {
				firstway = 'R';
				firstdis = dis;
				firstin = true;
			}
			if (before_way == 'U') {
				//case UR
				ans -= dis * before_dis;
			}else if (i == 5 && firstway == 'D'){
				ans -= dis * firstdis;
			}
			before_way = 'R';
			before_dis = dis;
			L = max(L, dis);
			break;
		case 2:
			//L
			if (!firstin) {
				firstway = 'L';
				firstdis = dis;
				firstin = true;
			}
			if (before_way == 'D') {
				//case DL
				ans -= dis * before_dis;
			}else if (i == 5 && firstway == 'U') {
				ans -= dis * firstdis;
			}
			before_way = 'L';
			before_dis = dis;
			L = max(L, dis);
			break;
		case 3:
			//D
			if (!firstin) {
				firstway = 'D';
				firstdis = dis;
				firstin = true;
			}
			if (before_way == 'R') {
				//case RD
				ans -= dis * before_dis;
			}else if(i==5&&firstway=='L')
				ans-= dis * firstdis;
			before_way = 'D';
			before_dis = dis;
			H = max(H, dis);
			break;
		case 4:
			//U
			if (!firstin) {
				firstway = 'U';
				firstdis = dis;
				firstin = true;
			}
			if (before_way == 'L') {
				//case LU
				ans -= dis * before_dis;
			}else if (i == 5 && firstway == 'R') {
				ans -= dis * firstdis;
			}
			before_way = 'U';
			before_dis = dis;
			H = max(H, dis);
			break;

		default:

			break;
		}
		
	}
	ans += L * H;
	ans *= cham;
	cout << ans << endl;

	return 0;
}