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

int s[200001][26]={0,};
//int arr[100001];
//pair<int,int> dp[1001];
//char target[200001];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string word;
	getline(cin, word);
	
	/*for (int i = 0; i < 26; i++) {
		s[0][i] = 0;
	}*/
	
	for (int i = 1; i <= word.length(); i++) {
		for (int j = 0; j < 26; j++) {
			s[i][j] = s[i - 1][j];
		}
		s[i][word.at(i - 1) - 'a'] = s[i - 1][word.at(i - 1) - 'a'] + 1;
		//cout << s[i][word.at(i - 1)-'a'] << endl;
	}
	
	int q;
	cin >> q;
	
	
	for (int i = 1; i <= q; i++) {
		char a;
		int b, c;
		//scanf_s("%c", &a);
		//scanf_s("%d %d", &b, &c);
		//printf("%d\n",()a)
		cin >> a >> b >> c;
		//printf("%d  /   %d  ", s[c + 1][(int)a - 'a'], s[b][(int)a - 'a']);
		printf("%d\n", s[c+1][(int)a - 'a'] - s[b][(int)a - 'a']);
	}
	
		
	
	return 0;
}