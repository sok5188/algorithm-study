
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
	while (true) {
		int a, b;
		cin >> a >> b;
		if (a == 0 || b == 0)
			break;
		int i = 1;
		int flag = 0;
		while (true) {
			if (a * i == b)
				flag = 1;
			if (a * i > b)
				break;
			i++;

		}
		i = 1;
		while (true) {
			if (b * i == a)
				flag = 2;
			if (b * i > a)
				break;
			i++;

		}
		if (flag == 1)
			cout << "factor" << endl;
		else if (flag == 2)
			cout << "multiple" << endl;
		else
			cout << "neither" << endl;
	}
	
	return 0;
}