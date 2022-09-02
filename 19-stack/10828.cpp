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

int stackk[10001];
int start, fin;
void push(int x);
int pop();
int size();
int t_empty();
int top();

void push(int x) {
	stackk[++fin] = x;
}
int pop() {
	if (t_empty() == 1)
		return -1;
	int r = stackk[fin];
	fin--;
	return r;
}
int size() {
	return fin - start;
}
int t_empty() {
	if (start == fin)
		return 1;
	return 0;
}
int top() {
	if (t_empty() == 1)
		return -1;
	return stackk[fin];
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	start = fin = 0;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if (s.at(0) == 'p') {
			if (s.at(1) == 'u') {
				//push
				int tt;
				cin >> tt;
				push(tt);
			}
			else {
				//pop
				cout<<pop()<<endl;
			}
		}
		else if (s.at(0) == 's') {
			//size
			cout << size() << endl;
		}
		else if (s.at(0) == 'e') {
			//empty
			cout << t_empty() << endl;
		}
		else {
			//top
			cout << top() << endl;
		}
	}

	

	return 0;
}