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
using namespace std;



int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	queue<int> q;
	for (int i = 1; i <= n; i++)
		q.push(i);
	while (true) {
		if (q.size() == 1) {
			cout << q.front() << endl;
			break;
		}
		q.pop();
		int f = q.front();
		q.pop();
		q.push(f);
	}



	
	return 0;
}