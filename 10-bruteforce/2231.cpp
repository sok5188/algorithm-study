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
	int ans = 0;
	string ns = to_string(n);
	char c = ns.at(0);
	int start = (c - '0') * pow(10, ns.length()-1)-10*ns.length();
	
	for (int i = start; i < n; i++) {
		string s = to_string(i);
		int sum = i;
		for (int j = 0; j < s.length(); j++) {
			sum += s.at(j) - '0';
		}
		if (sum == n) {
			ans = i;
			break;
		}
	}
	cout << ans << endl;
	return 0;
}