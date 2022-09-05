#include <iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<vector>
#include<cmath>
#include<stdio.h>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<deque>
using namespace std;

long long ans;
long long c;

long long c_dc(int a, int b) {

	if (b == 1) {
		return a % c;
	}
	if (b % 2 == 1) {
		//oddans = (ans * a) % c;
		
		long long tmp = c_dc(a, b / 2) % c;
		tmp = (tmp * tmp) % c;
		tmp = (tmp * a) % c;
		return tmp;
	}
	else {
		long long tmp = c_dc(a, b / 2) % c;
		tmp = (tmp * tmp) % c;
		//tmp = (tmp * a) % c;
		return tmp;
	}
	
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long n,b;
	cin >> n>>b>>c;
	

	
	cout << c_dc(n, b)<< endl;
	
	return 0;
}