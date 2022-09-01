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

	string s;
	cin >> s;
	string word;
	bool flag = false;
	bool start = false;
	int ans = 0;
	int tsum = 0;
	bool last = false;
	bool in_minus = false;
	for (int i = 0; i < s.length(); i++) {
		if (s.at(i) == '+') {
			int num = stoi(word);
			word = "";
			if (in_minus) {
				tsum += num;
			}
			else {
				ans += num;
			}
		}
		else if (s.at(i) == '-') {
			int num = stoi(word);
			word = "";
			if (in_minus) {
				tsum += num;
				ans -= tsum;
				tsum = 0;
			}
			else {
				//first minus > 이전값 add
				ans += num;
				in_minus = true;
			}

			
		}
		else {
			word += s.at(i);
		}
	}
	if (in_minus) {
		int num = stoi(word);
		tsum += num;
		ans -= tsum;
	}
	else {
		int num = stoi(word);
		ans += num;
	}
	
	
	cout << ans << endl;
	return 0;
}