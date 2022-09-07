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

long long arr[101][101];
long long arr2[101][101];
long long ans[101][101];
long long n, m,k;

long long mul(int i, int j) {
	int cnt = 0;
	for (int x = 0; x < m; x++) {
		cnt += arr[i][x] * arr2[x][j];
	}
	return cnt;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];
	cin >> m >> k;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < k; j++)
			cin >> arr2[i][j];
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			cout<<mul(i, j)<<" ";
		}
		cout << endl;
	}
	

	return 0;
}