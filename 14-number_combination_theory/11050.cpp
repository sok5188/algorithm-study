
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
	int n,k;
	cin >> n>>k;

	int a, b;
	a = b = 1;
	for (int i = n-k+1; i <= n; i++) {
		a *= i;
	}
	for(int i=1;i<=k;i++)
		b *=i;
	cout << a / b << endl;
		

	
	return 0;
}