#include<iostream>
#include<algorithm>

using namespace std;
int dp[101][100001];
int w[101];
int v[101];
int main(){
	int n,weigh;

	cin>>n>>weigh;

	for(int i=1;i<=n;i++){
		
		cin>>w[i]>>v[i];
		
	}
	

	for(int i=1;i<=n;i++){
		for(int j=0;j<=weigh;j++){
			
			dp[i][j]=dp[i-1][j];
			if(j-w[i]>=0){
				dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]);
			}
		}
		
	}
	cout<<dp[n][weigh]<<endl;
	return 0;
}