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

	
	ans = 0;

	long long low = 1;
	long long high =n*n;
	//cout << high << endl;

	while (low <= high) {
		
		long long mid = (low + high) / 2;
		long long cnt = 0;
		for (int i =1 ;i<=n;i++) {
			cnt += min(n, (long long)mid / i);
			if (i > mid) break;
		}

		if (cnt >= k) {
			high = mid - 1;
			ans = mid;
		}
		else {
			low = mid + 1;
		}
			
	}

	cout << ans << endl;


	return 0;
}