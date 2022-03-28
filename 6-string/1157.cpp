#include<iostream>
#include<string>
using namespace std;
int main() {
	int arr[26];
	fill_n(arr, 26, -1);
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		char tmp = s.at(i);
		int point = 0;
		if ((int)tmp > 90) {
			point = tmp - 'a';
		}
		else {
			point = tmp - 'A';
		}
		arr[point]++;
	}

	int maxi = -1;
	bool is_equal = false;
	char ans = '?';
	for (int i = 0; i < 26; i++) {
		if (arr[i] > maxi) {
			ans = 'A' + i;
			is_equal = false;
			maxi = arr[i];
		}
		else if (arr[i] == maxi) {
			is_equal = true;
		}

	}
	if (is_equal) {
		cout << '?' << endl;
	}
	else {
		cout << ans << endl;
	}
	return 0;
}