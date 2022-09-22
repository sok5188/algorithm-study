#include <iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<cmath>
#include<stdio.h>
#include<queue>
#include<functional>
using namespace std;

bool dp[2001][2001];
int arr[2001];
int n,m;

void felin(int start,int end) {
	if (start >= end) {
		return;
	}
		
	if (dp[start][end])
		return;

	if (arr[start] == arr[end]) {
		dp[start][end] = true;
		felin(start + 1, end-1);
		if (!dp[start + 1][end - 1]&&start+1<end-1)
			dp[start][end] = false;
	}
	else {
		dp[start][end] = false;
		felin(start + 1, end - 1);
	}

}
int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf_s("%d", &arr[i]);
		dp[i][i] = true;
	}
		
	for (int i = 1; i < n; i++) {
		for (int j = n; j > i; j--) {
			if (arr[j] == arr[i])
				felin(i, j);
		}
	}
	scanf_s("%d", &m);
	for (int i = 1; i <= m; i++) {
		int a, b;
		scanf_s("%d %d", &a,&b);
		if (dp[a][b])
			printf("1\n");
		else
			printf("0\n");
	}
	return 0;
}