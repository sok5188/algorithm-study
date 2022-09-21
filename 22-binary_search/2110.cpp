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

long long arr[200009];
long long ans;
long long n, k;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	ans = 0;

	long long low = 1;
	long long high = arr[n - 1]-arr[0];
	//cout << high << endl;

	while (low <= high) {
		long long bef = arr[0];
		long long mid = (low + high) / 2;
		long long cnt = 1;
		for (int i =1 ;i<n;i++) {
			if (arr[i] - bef >= mid) {
				bef = arr[i];
				cnt++;
			}
		}
		if (cnt >= k) {
			ans = max(ans, mid);
			low = mid + 1;
		}
		else
			high = mid - 1;
	}

	cout << ans << endl;


	return 0;
}