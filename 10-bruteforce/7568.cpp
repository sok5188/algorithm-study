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
	pair<int, int> p[51];
	int priority[51];
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		p[i].first = x;
		p[i].second = y;
		priority[i] = 1;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j)
				continue;
			if (p[i].first < p[j].first && p[i].second < p[j].second) {
				priority[i]++;
			}
		}
	}

	for (int i = 0; i < n; i++)
		cout << priority[i] << " ";

	return 0;
}