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


FILE* stream;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	//freopen_s(&stream,"I.in", "r", stdin);
	//freopen_s(&stream,"I.out", "w", stdout);
	int t;
	cin >> t;
	while (t--) {
		string fu;
		cin >> fu;
		int n;
		cin >> n;
		deque<int> deq;
		deque<int>::iterator iter;
		deque<int>::reverse_iterator riter;
		char tt;
		cin >> tt;
		//get [
		
		for (int i = 0; i < n-1; i++) {
			int tmp;
			cin >> tmp;
			//get num
			char trash;
			cin >> trash;
			//get ,
			deq.push_back(tmp);
		}
		if (n > 0) {
			int tmp;
			cin >> tmp;
			deq.push_back(tmp);
		}
		cin >> tt;
		//get ]
		bool rflag = false;
		bool errflag = false;
		for (int i = 0; i < fu.length(); i++) {
			if (fu.at(i) == 'R') {
				if (deq.empty() == 1)
					continue;
				if (rflag)
					rflag = false;
				else
					rflag = true;
			}
			else {
				if (deq.empty() == 1) {
					errflag = true;
					break;
				}
					
				if (rflag) {
					deq.pop_back();

				}
				else {
					deq.pop_front();
				}
			}
		}
		
		if (errflag)
			printf("error\n");
		else if (deq.empty() == 1)
			printf("[]\n");
		else if (rflag) {
			printf("[%d", deq.back());
			deq.pop_back();
			if (!deq.empty()) {
				for (riter = deq.rbegin(); riter != deq.rend(); riter++) {
					printf(",%d", *riter);
				}
			}
			
			printf("]\n");
		}else {
			printf("[%d", deq.front());
			deq.pop_front();
			if (!deq.empty()) {
				for (iter = deq.begin(); iter != deq.end(); iter++) {
					printf(",%d", *iter);
				}
			}
			
			printf("]\n");
		
		}
	}



	return 0;
}