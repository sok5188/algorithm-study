
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
int col[16] = { 0, };
int cnt = 0;

void dfs(int depth) {
	/*printf("now in %dth depth\n", depth);
	prtb();
	printf("\n\n");*/
	
	if (depth == m+1) {
		cnt++;
		return; 
	}
	for (int i =1; i <= n; i++) {
		if (col[depth] == 0) {
			// this area is empty
			bool clear = true;
			for (int j = 1; j < depth; j++) {
				if (col[j] == i) {
					// in the same row
					clear = false;
				}
				else {
					//maybe in the same diagonal
					if (i == col[j] + (depth - j) || i == col[j] - (depth - j)) {
						//in the same diagonal
						clear = false;
					}
				}
			}
			if (clear) {
				col[depth] = i;
				dfs(depth + 1);
				col[depth] = 0;
			}
		
			
		}
	}
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	

	cin >> n;
	m = n;
	dfs(1);
	printf("%d\n", cnt);
	return 0;
}