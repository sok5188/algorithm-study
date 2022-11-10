
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
	int n,m;
	cin >> n>>m;
	int  GCD= 1;
	int LCM = 0;
	int n1 = n;
	int m1 = m;
	for (int i = 2; i <= max(n,m); i++) {
		if (n % i == 0 && m % i == 0) {
			GCD *= i;
			n = n / i;
			m = m / i;
			i = 1;
		}
	}
	LCM = GCD * n * m;
	cout << GCD <<endl<< LCM << endl;
	
	
	return 0;
}