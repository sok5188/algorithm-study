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
	int n,k;
	cin >> n>>k;
	deque<int> q;
	for (int i = 1; i <= n; i++)
		q.push_back(i);
	int pt = 0;
	int cnt = 0;
	cout << "<";
	while (true) {
		cnt++;
		if (cnt == n) {
			cout << q.front() << ">" << endl;
			break;
		}
		pt += k - 1;
		while (pt >= q.size())
			pt -= q.size();
		int on = q.at(pt);
		q.erase(q.begin() + pt);
		
		cout << on << ", ";
	}



	
	return 0;
}