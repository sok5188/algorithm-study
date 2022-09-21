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

long long arr[500001];

int bs(int low, int high,int target) {
	int mid = (low + high) / 2;
	if (low > high)
		return 0;
	if (arr[mid] == target) {
		int cnt = 0;
		int i = mid;
		while (arr[i] == target) {
			cnt++;
			i--;
		}
		i = mid+1;
		while (arr[i] == target) {
			cnt++;
			i++;
		}
		return cnt;
	}
	else if (arr[mid] > target) {
		return bs(low, mid - 1,target);
	}
	else {
		return bs(mid + 1, high,target);
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n);
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		int tmp;
		cin >> tmp;
		printf("%d ",bs(0, n - 1, tmp));
	}
		

	return 0;
}