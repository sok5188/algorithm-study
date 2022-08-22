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
#define MAX_SIZE 9
int n, m;
// 반복문 -조건문 -반복문-조건문 형태라서  time over.
int stat_arr[22][22];
bool slt_flag[22] = { false, };
int mini = INT16_MAX;
void dfs(int depth) {
	
	if (depth == n/2) {
		//calculate distance

		//team true
		int sum1 = 0;
		//team false
		int sum2 = 0;
		for (int i = 0; i < n-1; i++) {
			if (slt_flag[i]) {
				for (int j = i + 1; j < n; j++) {
					if (slt_flag[j]) {
						sum1 += stat_arr[i][j] + stat_arr[j][i];
					}
				}
			}
			else {
				for (int j = i + 1; j < n; j++) {
					if (!slt_flag[j]) {
						sum2 += stat_arr[i][j] + stat_arr[j][i];
					}
				}
			}
		}
		

		int dis = max(sum1, sum2) - min(sum1, sum2);
		if (dis < mini)
			mini = dis;
		return; 
	}
	for (int i =1; i < n; i++) {
		if (!slt_flag[i]) {
			//make true team
			slt_flag[i] = true;
			dfs(depth + 1);
			slt_flag[i] = false;
		}
		
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &stat_arr[i][j]);
		}
	}
	slt_flag[0] = true;
	//첫번째 멤버는 true팀으로 고정
	dfs(1);
	printf("%d\n", mini);
	return 0;
}