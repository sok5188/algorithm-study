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

long long road[100001];
long long gas[100001];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	for (int i = 0; i < n - 1; i++) {
		//road size
		cin >> road[i];
	}
	for (int i = 0; i < n; i++) {
		//gas price
		cin >> gas[i];
	}
	
	long long mini = gas[0];
	long long road_sum = 0;
	long long ans = 0;
	for (int i = 0; i < n-1; i++) {
		
		if (mini > gas[i]) {
			//i 번째 station이 이전의cheapest station보다 더 싸다.
			// 이전의 road 를 이전의 station에서 주유한다.
			ans += road_sum * mini;
			//cout<<"now add "<<road_sum<<"*"<< mini << "at " << i << "th station"<<endl;
			// mini 변경
			mini = gas[i];
			//road sum 초기화
			road_sum = 0;
		}
		road_sum += road[i];
	}



	if (road_sum != 0)
		ans += road_sum * mini;
	cout << ans << endl;

	return 0;
}