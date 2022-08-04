#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<numbers>
#include<iomanip>
#include<cmath>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[1001];
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		arr[i] = t;
	}
	sort(arr, arr + n);
	for (int i = 0; i < n; i++)
		cout << arr[i] << endl;
	return 0;
}