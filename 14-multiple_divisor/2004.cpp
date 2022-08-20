
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


long long func(int n, int x)
{
	int num = 0;

	for (long long i = x; n / i >= 1; i *= x) {
		num += n / i;
	}

	return num;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long n,r;
	cin >> n>>r;
	long long two, five;
	two = func(n, 2) - func(r, 2) - func(n - r, 2);

	five = func(n, 5) - func(r, 5) - func(n - r, 5);
	cout << min(two, five) << endl;
	
	return 0;
}