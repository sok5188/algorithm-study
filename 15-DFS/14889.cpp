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

int n;

int stat_arr[22][22];
bool slt_flag[22];
int mini = INT32_MAX;
void dfs(int depth,int level) {

	if (depth == n / 2) {
		//calculate distance

		//team true
		int sum1 = 0;
		//team false
		int sum2 = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (slt_flag[i] && slt_flag[j]) { sum1 += stat_arr[i][j]; }
				else if(!slt_flag[i] && !slt_flag[j]) { sum2 += stat_arr[i][j]; }
				
			}
		}


		int dis = abs(sum1 - sum2);
		if (dis < mini)
			mini = dis;
		return;
	}
	for (int i = level; i < n-1; i++) {
			//- 숫자로 2부터 true팀 만들기 시작, 1은 true팀으로 고정.
			slt_flag[i] = true;
			dfs(depth + 1,i+1);
			slt_flag[i] = false;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
//n을 cin으로 받고 뒤에 array는 scanf로 받아서 계속 오류났었음..
// 앞으로 조심..
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf_s("%d", &stat_arr[i][j]);
		}
	}

	dfs(0,0);
	printf("%d\n", mini);
	return 0;
}