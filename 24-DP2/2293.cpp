#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> arr(n);
	vector<int> dp(k+1);
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	dp[0] = 1;	// 아무 동전도 선택하지 않은 경우
	for (int i = 0; i < n; i++) { //각 동전에 대해
		for (int j = arr[i]; j <= k; j++) { 
			dp[j] +=dp[j - arr[i]];
		}
	}

	cout<<dp[k]<<endl;
	return 0;
}