#include <iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<vector>
#include<cmath>
#include<stdio.h>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<deque>
using namespace std;


int arr[2500][2500];
int c1,c2,c3;
string ans;
void dc(int x, int y, int size) {
	if (size == 1) {
		if (arr[x][y] == 1)
			c3++;
		else if (arr[x][y] == 0)
			c2++;
		else
			c1++;
		return;
	}
	int now_col = arr[x][y];
	bool mtc = true;
	for (int i = x; i < x + size; i++) {
		for (int j = y; j < y + size; j++) {
			if (now_col != arr[i][j]) {
				//have to divide
				mtc = false;
				//ans += '(';
				dc(x, y, size / 3);
				dc(x, y+ size / 3, size / 3);
				dc(x, y+ 2*(size / 3), size / 3);
				dc(x + size / 3, y, size / 3);
				dc(x + size / 3, y + size / 3, size / 3);
				dc(x + size / 3, y + 2 * (size / 3), size / 3);
				dc(x + 2 * (size / 3), y, size / 3);
				dc(x + 2 * (size / 3), y + size / 3, size / 3);
				dc(x + 2 * (size / 3), y + 2 * (size / 3), size / 3);
				//ans += ')';
				break;
			}
		}
		if (!mtc)
			break;
	}
	if (mtc) {
		if (now_col == 1)
			c3++;
		else if (now_col == 0)
			c2++;
		else
			c1++;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	c1 = c2 = c3 = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			
			cin >> arr[i][j];
			
		}
			

	dc(0, 0, n);
	//ans += ')';
	cout << c1 << endl << c2 << endl << c3 << endl;

	return 0;
}