
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


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m;
	cin >> n>>m;
	map<int, string> mp;
	map<string,int> mp2;
	for (int i = 1; i <= n; i++) {
		string s;
		cin >> s;
		mp.insert({ i,s });
		mp2.insert({ s,i });
	}
	auto iter=mp.begin();
	
	for (int i = 0; i < m; i++) {
		//char tmp[30];
		//scanf_s("%30s", tmp);
		//string s = tmp;
		string s;
		cin >> s;
		//string
		if (isalpha(s.at(0))) {
			//find int by stirng
			auto iter2 = mp2.find(s);
			printf("%d\n", iter2->second);
			
		}
		else {
			// integer to string
			iter = mp.find(stoi(s));
			printf("%s\n", iter->second.c_str());
		}
	}
	
	return 0;
}