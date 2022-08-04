
#include <iostream>
#include<algorithm>
#include<cstring>
#include<vector>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	pair<int, int> p[100001];

	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		p[i].first = b;
		p[i].second = a;
	}
	sort(p, p + n);
	for (int i = 0; i < n; i++)
		printf("%d %d\n", p[i].second, p[i].first);
	return 0;
}