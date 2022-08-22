
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
void dfs(int depth) {

	if (depth == m) {
		for (int i = 0; i < m; i++)
			printf("%d ",arr[i]);
		printf("\n");
		return;
	}
	for (int i =1; i <= n; i++) {
		if (!visited[i]) {
			visited[i] = true;
			arr[depth] = i;
			dfs(depth + 1);
			visited[i] = false;
		}
	}
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	

	cin >> n >> m;
	
	dfs(0);
	return 0;
}