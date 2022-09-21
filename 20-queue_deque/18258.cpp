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
void push(int x);
int pop();
int size();
int empty();
int front();
int back();
int arr[2000001];
int start, fin;
void push(int x) {
	arr[fin++] = x;
}
int empty() {
	if (start == fin)
		return 1;
	return 0;
}
int pop() {
	if (empty() == 1)
		return -1;
	return arr[start++];
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
	start = fin = 0;
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
				cout << pop() << endl;
			}
		}
		else if (s.at(0) == 's') {
			//size
			cout << size() << endl;
		}
		else if (s.at(0) == 'e') {
			//empty
			cout << empty() << endl;
		}
		else if(s.at(0)=='f') {
			//top
			cout << front() << endl;
		}
		else
			cout << back() << endl;
	}



	
	return 0;
}