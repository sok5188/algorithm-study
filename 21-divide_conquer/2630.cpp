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


int arr[200][200];
int blue, white;
void dc(int x, int y, int size) {
	if (size == 1) {
		if (arr[x][y] == 1)
			blue++;
		else
			white++;
		return;
	}
	int now_col = arr[x][y];
	bool mtc = true;
	for (int i = x; i < x + size; i++) {
		for (int j = y; j < y + size; j++) {
			if (now_col != arr[i][j]) {
				//have to divide
				mtc = false;
				dc(x, y, size / 2);
				dc(x + size / 2, y, size / 2);
				dc(x, y + size / 2, size / 2);
				dc(x + size / 2, y + size / 2, size / 2);
				break;
			}
		}
		if (!mtc)
			break;
	}
	if (mtc) {
		if (now_col == 1)
			blue++;
		else
			white++;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	blue = white = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> arr[i][j];

	dc(0, 0, n);
	
	cout << white << endl;
	cout << blue << endl;

	return 0;
}