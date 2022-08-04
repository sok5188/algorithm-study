#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<numbers>
#include<iomanip>
#include<cmath>

using namespace std;

int partition(vector<int> v, int left, int right) {
    ios::sync_with_stdio(false);
	int pivot;
	int low, high;
	low = left;
	high = right + 1;
	pivot = v[left];
	do {
		do
			low++;
		while (low <= right && v[low] < pivot);
		do
			high--;
		while (high >= left && v[high] > pivot);
		if (low < high) swap(v[low], v[high]);
	} while (low < high);

	swap(v[left], v[high]);
	return high;
}

void quick_s(vector<int> v, int left, int right) {
	if (left < right) {
		int q = partition(v, left, right);
		quick_s(v, left, q - 1);
		quick_s(v, q + 1, right);
	}
}

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