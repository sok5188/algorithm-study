
#include <iostream>
#include<algorithm>
#include<cstring>
#include<vector>
#include<cmath>
using namespace std;
bool compare(string a, string b) {
	if (a.length() == b.length()) {
		return a > b;
	}
	else return a.length() > b.length();
}
int main()
{
	int n;
	cin >> n;
	vector<string> v;

	for (int i = 0; i < n; i++) {
		string tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end(), compare);
	for (int i = n-1; i >=0; i--) {
		if (i == 0) {
			cout << v[i] << endl;
		}
		else {
			if (i != 0 && v[i - 1] == v[i])
				continue;
			cout << v[i] << endl;
		}
	}
		
	return 0;
}