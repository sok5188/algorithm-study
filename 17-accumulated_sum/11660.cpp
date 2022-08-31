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

int s[1030][1030];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;
	
	s[0][0] = 0;
	for (int i = 1; i <= n; i++) {
		int sum = 0;
		s[i][0] = 0;
		for (int j = 1; j <= n; j++) {
			int a;
			cin >> a;
			sum += a;
			s[i][j] = sum;
		}
		
	}
	
	
	for (int i = 1; i <= m; i++) {
		int x1, x2, y1, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		int sum = 0;
		for (int j = x1; j <= x2; j++) {
			//cout << "now " << s[x2][y2] << " - " << s[x2][y1 - 1] << " and " << s[x1][y2] << " - " << s[x1][y1 - 1] << endl;
			sum += (s[j][y2] - s[j][y1 - 1]);
		}
		cout << sum << endl;
	}

	
	
	return 0;
}