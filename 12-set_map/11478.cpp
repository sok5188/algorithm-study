
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

// 스스로 짠 코드
// 이중 반복문 안에서 substr find를 실행해서( 아마 find가 가장큰 문제같긴함)
// 시간복잡도가 증가한듯..
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string s;
	cin >> s;
	
	set<string>st1;

	int cnt = 0;
	for (int i = 1; i <= s.length(); i++) {
		for (int j = 0; j < s.length() - i + 1; j++) {
			string tmp = s.substr(j, i);
			//cout << "now tmp is : " << tmp;
			if (st1.find(tmp) == st1.end()) {
				//cout << "     and this is first sub" << endl;
				st1.insert(tmp);
				cnt++;
			}
		}
	}
	cout << cnt << endl;
	return 0;
}