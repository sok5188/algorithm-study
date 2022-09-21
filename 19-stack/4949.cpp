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
	return stackk[fin--];
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
	
	while(true) {
		string s;
		getline(cin, s);
		if (s.at(0) == '.')
			break;
		start = fin=0;
		bool flag = false;
		int lrflag = -1;
		for (int i = 0; i < s.size(); i++) {
			char tar = s.at(i);
			if (tar == '(') {
				
				push(1);
			}
			else if(tar==')') {
				int t = pop();
				if (t == -1) {
					flag = true;
					break;
				}
				if (t == 2) {
					flag = true;
					break;
				}
				
			}
			else if (tar == '[') {
				push(2);
			}
			else if (tar == ']') {
				int t = pop();
				if (t == -1) {
					flag = true;
					break;
				}
				if (t == 1) {
					flag = true;
					break;
				}
			}
			else
				continue;
		}
		if (flag)
			printf("no\n");
		else if(t_empty()==1)
			printf("yes\n");
		else
			printf("no\n");
	}
	
	return 0;
}