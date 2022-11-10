
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
int gcd(int a, int b) {
	int r;
	while (b != 0) {
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	unsigned int arr[101];
	vector<int> ans;
	int first;
	cin >> first;
	for (int i = 0; i < n-1; i++) {
		int ring;
		cin >> ring;
		int div = gcd(first, ring);
		cout << first / div << "/" << ring / div << endl;
	}
	return 0;
}