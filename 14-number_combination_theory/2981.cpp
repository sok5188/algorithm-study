
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
int gcd(int a, int b) {
	int r;
	while (b != 0) {
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	unsigned int arr[101];
	vector<int> ans;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	int mm = arr[1] - arr[0];
	for (int i = 2; i < n; i++)
		mm=gcd(mm, arr[i] - arr[i - 1]);
    // 결국 arr i arri-1 간의 차이가 m*C의 형태이고 이 C또한 각각 다르며 m에 영향을 받는다
    // 그러므로 쉽게 생각해보면 배열간의 차이를 T라고하면 Ti=M*Ci인셈..
    // 따라서 이 배열의 차들은 M을 공통인자로 가짐 >> 이 차이의 최대공약수의 약수 모두가 M이 될수있음
	for (int i = 1; i*i <= mm; i++) {
		if (mm % i == 0) {
			ans.push_back(i);
			if (mm / i != i)
				ans.push_back(mm / i);
		}
			
	}
    // 그냥 2부터 쭉 하면 시간초과남 
    // sqrt mm까지만 검사 ! 후 맞은편 약수 따로 추가해주기
    
	sort(ans.begin(), ans.end());
	for (int i = 1; i < ans.size(); i++)
		cout << ans[i] << " ";
	
	return 0;
}