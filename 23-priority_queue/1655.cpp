#include <iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<cmath>
#include<stdio.h>
#include<queue>
#include<functional>
using namespace std;

priority_queue<int, vector<int>, less<int>> max_heap;
priority_queue<int, vector<int>, greater<int>> min_heap;

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	
	while (n--) {
		int tmp;
		cin >> tmp;
		if (max_heap.empty() || max_heap.size() == min_heap.size())
			max_heap.push(tmp);
		else
			min_heap.push(tmp);
		//push end

		if (!min_heap.empty() && max_heap.top() > min_heap.top()) {
			int a = max_heap.top();
			max_heap.pop();
			int b = min_heap.top();
			min_heap.pop();
			max_heap.push(b);
			min_heap.push(a);
		}
		printf("%d\n", max_heap.top());
	}


	return 0;
}