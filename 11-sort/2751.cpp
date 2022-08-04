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
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		v.push_back(t);
	}
	sort(v.begin(),v.end());
	for (int i = 0; i < n; i++)
		printf("%d\n", v[i]);
	return 0;
}