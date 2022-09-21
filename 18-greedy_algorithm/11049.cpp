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

int arr[11];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k;
	cin >> n >> k;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		if (tmp > k)
			continue;
		arr[cnt] = tmp;
		cnt++;
	}
	int sum = k;
	int coin = 0;
	while (true) {
		if (arr[cnt - 1] > sum) {
			cnt--;
			continue;
		}
		sum -= arr[cnt - 1];
		coin++;
		if (sum == 0) {
			break;
		}
	}
	cout << coin << endl;
	return 0;
}