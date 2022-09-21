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

int s[100001];
int arr[100001];
pair<int,int> dp[1001];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	
	int n, m;
	scanf("%d",&n);
    scanf("%d",&m);
    
	int sum = 0;
	s[0] = 0;
	for (int i = 1; i <= n; i++) {
		int tmp;
		scanf("%d",&tmp);
		sum += tmp;
		s[i] = sum;
	}
	for (int i = 0; i < m; i++) {
		int a, b;
		scanf("%d %d",&a,&b);
		int ans = s[b] - s[a - 1];
		printf("%d\n",ans);
	}
		
	
	return 0;
}