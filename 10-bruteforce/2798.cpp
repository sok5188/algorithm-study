#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<numbers>
#include<iomanip>
#include<cmath>
using namespace std;
int ans = 0;
int n,m;
void bf(int arr[], int depth,int sum,int start) {
	if (depth == 3) {
		if (sum <= m)
			if (ans < sum)
				ans = sum;
		return;
	}
	
		for (int i = start; i < n; i++) {
			sum += arr[i];
			depth++;
			start = i + 1;
			bf(arr, depth, sum, start);
			start = i - 1;
			depth--;
			sum -= arr[i];
		}
		return;
}

int main() {
	
	cin >> n >> m;
	int arr[101];
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		arr[i] = t;
	}
	bf(arr, 0, 0, 0);
	cout << ans << endl;
	return 0;
}