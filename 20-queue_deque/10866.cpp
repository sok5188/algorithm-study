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
void push_front(int x);
void push_back(int x);
int pop_front();
int pop_back();
int size();
int empty();
int front();
int back();
int arr[100001];
int start, fin;
void push_back(int x) {
	arr[fin++] = x;
}
void push_front(int x) {
	arr[--start] = x;
}
int empty() {
	if (start == fin)
		return 1;
	return 0;
}
int pop_front() {
	if (empty() == 1)
		return -1;
	return arr[start++];
}
int pop_back() {
	if (empty() == 1)
		return -1;
	return arr[--fin];
}
int size() {
	if (empty() == 1)
		return 0;
	return fin - start;
}
int front() {
	if (empty() == 1)
		return -1;
	return arr[start];
}
int back() {
	if (empty() == 1)
		return -1;
	return arr[fin-1];
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	start = fin = 50000;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if (s == "push_front") {
			int tt;
			cin >> tt;
			push_front(tt);
		}
		else if (s == "push_back") {
			int tt;
			cin >> tt;
			push_back(tt);
		}
		else if (s == "pop_front") {
			cout << pop_front() << endl;
		}
		else if (s == "pop_back") {
			cout << pop_back() << endl;
		}
		else if (s.at(0) == 's') {
			//size
			cout << size() << endl;
		}
		else if (s.at(0) == 'e') {
			//empty
			cout << empty() << endl;
		}
		else if (s.at(0) == 'f') {
			//top
			cout << front() << endl;
		}
		else
			cout << back() << endl;
	}




	return 0;
}