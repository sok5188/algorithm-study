
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
	int mx = 0;
	int mi = 999999;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		if (tmp > mx)
			mx = tmp;
		if (tmp < mi)
			mi = tmp;
	}
	cout << mi * mx << endl;
	
	return 0;
}