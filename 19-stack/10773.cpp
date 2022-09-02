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
void pop();
int size();
int t_empty();
int top();

void push(int x) {
	stackk[++fin] = x;
}
void pop() {
	if (t_empty() == 1)
		return;
	int r = stackk[fin];
	fin--;
	//return r;
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
		int num;
		cin >> num;
		if (num == 0)
			pop();
		else
			push(num);
	}
	int sum = 0;
	for (int i = 1; i <= fin; i++) {
		sum += stackk[i];
	}
	
	cout << sum << endl;
	return 0;
}