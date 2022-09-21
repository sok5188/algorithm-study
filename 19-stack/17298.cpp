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
using namespace std;


int arr[1000001];




int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	vector<int> v;
	stack<int> st,ans;
	
	int mx = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		//st.push(arr[i]);
	}
	
	for (int i = n-1; i >=0; i--) {
		
		while (!st.empty() && st.top() <= arr[i])
			st.pop();
		if (st.empty())
			ans.push(-1);
		else
			ans.push(st.top());
		st.push(arr[i]);
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", ans.top());
		ans.pop();
	}


	
	return 0;
}