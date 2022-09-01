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

pair<int,int> arr[100001];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
		cin >> n;
	int cnt = 0;
	int start, end;
	start = end = 0;
	for (int i = 0; i < n; i++) {
		int s, e;
		cin >> s >> e;
		arr[i] = { e ,s };
	}
	sort(arr, arr + n);
	
	for (int i = 0; i < n; i++) {
		if (end <= arr[i].second) {
			end = arr[i].first;
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}