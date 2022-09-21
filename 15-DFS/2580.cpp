
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
bool visited[MAX_SIZE] = { false, };
int arr[MAX_SIZE] = { 0, };
int board[10][10];
int ans_board[10][10];
int cnt = 0;
pair<int, int> zero_arr[100];
int zc = 0;
bool check_row(int r, int target) {
	for (int i = 0; i < 9; i++) {
		if (board[r][i] == target)
			return false;
	}
	return true;
}
bool check_col(int c, int target) {
	for (int i = 0; i < 9; i++) {
		if (board[i][c] == target)
			return false;
	}
	return true;
}
bool check_sqr(int r, int c, int target) {
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (board[3 * (r / 3) + i][3 * (c / 3) + j] == target)
				return false;
		}
	}
	return true;
}
void dfs(int depth) {
	static bool end_flag = false;
	if (end_flag)
		return;
	if (depth == zc) {
		//game end
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				ans_board[i][j] = board[i][j];
			}
		}
		end_flag = true;
		return; 
	}
	for (int i =1; i <= 9; i++) {
		int row = zero_arr[depth].first;
		int col = zero_arr[depth].second;
		bool flag1, flag2, flag3;
		flag1 = check_row(row, i);
		flag2 = check_col(col, i);
		flag3 = check_sqr(row, col, i);
		
		if (flag1&&flag2&&flag3) {
			// i is possible
			board[row][col] = i;
			dfs(depth + 1);
			if (end_flag)
				return;
			board[row][col] = 0;
		}
	}
}

void prtb() {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			printf("%d ", ans_board[i][j]);
		}
		printf("\n");

	}
		

			
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	
	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++) {
			scanf_s("%d",&board[i][j]);
			if (board[i][j] == 0) {
				zero_arr[zc++] = { i,j };
			}
				
		}
			
	
	dfs(0);
	prtb();
	return 0;
}