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

int n;

int stat_arr[22][22];
int fibc = 0;
int fiboc = 0;
int fib(int n) {
	if (n == 1 || n == 2) {
		fibc++;
		return 1;
	}
		
	else return (fib(n - 1) + fib(n - 2));
}
int fibo(int n) {
	int f[41];
	f[1] = f[2] = 1;
	for (int i = 3; i <= n; i++) {
		f[i] = f[i - 1] + f[i - 2];
		fiboc++;
	}
		
	return f[n];
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	fib(n);
	fibo(n);
	cout << fibc << " " << fiboc << endl;
	return 0;
}