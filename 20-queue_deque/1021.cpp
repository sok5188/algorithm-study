#include <iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<vector>
#include<cmath>
#include<stdio.h>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<deque>
using namespace std;



int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n ,m;
	cin >> n>>m;
	deque<int> de;
	for (int i = 1; i <= n; i++) {
		de.push_back(i);
	}
	int cnt = 0;
	for (int i = 0; i < m; i++) {
		int target;
		cin >> target;
		deque<int> de2=de;
		int cnt1, cnt2;
		cnt1 = cnt2 = 0;
		while (true) {
			if (de2.front() == target) {
				de2.pop_front();
				break;
			}

			cnt2++;
			int tmp = de2.back();
			de2.pop_back();
			de2.push_front(tmp);
		}
		//cout << "check" << endl;
		while (true) {
			if (de.front() == target) {
				de.pop_front();
				break;
			}
			cnt1++;
			int tmp = de.front();
			de.pop_front();
			de.push_back(tmp);
		}
		
		
		if (cnt1 > cnt2) {
			de = de2;
			cnt += cnt2;
		}
		else
			cnt += cnt1;
	}

	cout << cnt << endl;




	return 0;
}