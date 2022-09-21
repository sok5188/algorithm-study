
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
void dfs(int depth,int level) {

	if (depth == m+1) {
		for (int i = 0; i < m; i++)
			cout << arr[i] << " ";
		cout << endl;
		return; 
	}
	for (int i =level; i <= n; i++) {
		//cout << "now depth :  " << depth << " i is : "<< i  << endl;
		if (!visited[i]) {
			visited[i] = true;
			arr[depth-1] = i;
			
			dfs(depth + 1,i+1);
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
	
	dfs(1,1);
	return 0;
}