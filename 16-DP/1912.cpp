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


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	vector<int> dp;
	dp.push_back(0);
	int ss;
	cin >> ss;
	dp.push_back(ss);
	int memo;
	if (ss > 0)
		memo = ss;
	else
		memo=0;

	for (int i = 2; i <= n;i++) {
		int tmp;
		cin >> tmp;
        //이미 dp가 음수인데 또 음수가 들어온 경우
		if (dp[i - 1] < 0 && tmp < 0) {
			dp.push_back(max(dp[i - 1], tmp));
		}
		else {
            // 음수의 늪에서 벗어난 경우
			memo += tmp;
			//체인을 유지하는 경우를 memo에 저장
			if (memo > dp[i - 1]) {
				//memo가 종전의 dp값보다 커지는 경우
				dp.push_back(memo);
			}
			else if (memo < 0) {
				//memo가 음수가 된다면 기억할 필요가 없는 chain.
				memo = 0;
				dp.push_back(dp[i - 1]);
			}
			else {
				//memo가 dp i-1보다 작고 그렇다고 음수로 바뀌진 않았다. 
				//memo유지 dp i = dp i-1
				dp.push_back(dp[i - 1]);
			}
		}
		
		
		
		//cout << "now max is " << dp[i] << endl;
	}

	cout << dp[n] << endl;
	return 0;
}