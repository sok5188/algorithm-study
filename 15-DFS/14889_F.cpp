
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
// 머리아파 나아아아중에 왜 안되는 알고리즘인지 이해해보자..
int stat_arr[22][22];
bool slt_flag[22] = { false, };
int mini = INT16_MAX;
int sum1 = 0; //team true
int sum2 = 0; // team false
int hsum = 0;
void dfs(int depth) {
	
	if (depth == n/2) {
		//calculate distance
		int dis = max(sum1, sum2) - min(sum1, sum2);
		if (dis < mini)
			mini = dis;
		printf("reached final depth now distance is  : %d\n", dis);
		return; 
	}
	for (int i =1; i < n; i++) {
		if (!slt_flag[i]) {
			//make true team
			slt_flag[i] = true;
			int t1, t2;
			t1 = t2 = 0;
			for (int j = 0; j < i; j++) {
				if (slt_flag[j]) {
					//true team
					t1+= (stat_arr[i][j] + stat_arr[j][i]);
				}
			}
			//false team
			for (int j = 1; j < n; j++) {
				if (!slt_flag[j]) {
					t2+= (stat_arr[i][j] + stat_arr[j][i]);
				}
			}
			sum1 += t1;
			sum2 -= t2;
			printf("now depth is : %d, now sum is : %d and %d\n", depth, sum1, sum2);
			dfs(depth + 1);
			sum1 -= t1;
			sum2 += t2;
			
			printf("now sum is : %d and %d\n", sum1, sum2);
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
			scanf_s("%d", &stat_arr[i][j]);
			sum2 += stat_arr[i][j];
		}
	}
	printf("hole sum : %d\n", sum2);
	slt_flag[0] = true;
	for (int i = 1; i < n; i++) {
		sum2 -= (stat_arr[0][i] + stat_arr[i][0]);
	}
	dfs(1);
	printf("%d\n", mini);
	return 0;
}