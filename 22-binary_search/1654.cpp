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

long long arr[1000001];
long long ans;
long long n, k;
void bs(long long low, long long high,int st, int ed) {
	long long mid = (low + high) / 2;

	if (low > high)
		return;
	long long cnt=0;
	int flag = -1;
	for (int i = ed; i >= st; i--) {
		cnt += arr[i] / mid;
		if (cnt >= n) {
			flag = 0;
			break;
		}
	}
	if (flag == 0) {
		ans = mid;
		bs(mid + 1, high, st, ed);
	}
	else {
		bs(low,mid - 1, st, ed);
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> k>>n;

	for (int i = 0; i < k; i++) {
		cin >> arr[i];
	}	
	sort(arr, arr + k);
	ans = 0;
	
	bs(1, arr[k - 1], 0, k - 1);
	cout << ans << endl;
		

	return 0;
}