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
	int t;
	cin >> t;
	while (t--) {
		deque<pair<int, int>> q;
		vector<int> v;
		int mx = 0;
		int n, m;
		cin >> n >> m;
		for (int i = 0; i < n; i++) {
			int tmp;
			cin >> tmp;
			mx = max(mx, tmp);
			v.push_back(tmp);
			q.push_back({ tmp,i });
		}
		sort(v.begin(), v.end());
		int cnt = v.size() - 1;
		while (true) {
			if (v.at(cnt) == q.front().first) {
				if (q.front().second == m) {
					cout << v.size() - cnt<<endl;
					break;
				}
				q.pop_front();
				cnt--;
			}
			else {
				pair<int, int> tp = q.front();
				q.pop_front();
				q.push_back(tp);
			}
		}
	}
	
	
	



	
	return 0;
}