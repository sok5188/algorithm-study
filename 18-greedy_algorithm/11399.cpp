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

int arr[1001];
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
		cin>>arr[i];
	}
	sort(arr, arr + n);
	int sum = 0;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		sum = sum + arr[i];
		ans += sum;
	}
	cout << ans << endl;
	return 0;
}