
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

long long arr[12];
long long mx = INT32_MIN;
long long mini = INT32_MAX;
int pls, mis, multi, divide;
void dfs(int depth,long long sum) {
	bool psf, msf, muf, dif;
	psf = msf = muf = dif = false;
	if (depth == n-1) {
		if (mx < sum)
			mx = sum;
		if (mini > sum)
			mini = sum;
		return; 
	}
	for (int i =1; i <= 4; i++) {
		if (pls != 0&&!psf) {
			pls--;
			sum+=arr[depth + 1];
			dfs(depth + 1, sum);
			sum -= arr[depth + 1];
			pls++;
			psf = true;
		}
		if (mis!= 0&&!msf) {
			mis--;
			sum -= arr[depth + 1];
			dfs(depth + 1, sum);
			sum += arr[depth + 1];
			mis++;
			msf = true;
		}
		if (multi != 0&&!muf) {
			multi--;
			sum *= arr[depth + 1];
			dfs(depth + 1, sum);
			sum /= arr[depth + 1];
			multi++;
			muf = true;
		}
		if (divide != 0&&!dif) {
			divide--;
			long long tmps = sum;
			sum /= arr[depth + 1];
			dfs(depth + 1, sum);
			sum = tmps;
			divide++;
			dif = true;
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cin >> pls >> mis >> multi >> divide;
	
	dfs(0,arr[0]);
	cout << mx << endl<<mini << endl;
	return 0;
}