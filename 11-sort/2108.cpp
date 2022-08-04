#include <iostream>
#include<algorithm>
#include<cstring>
#include<vector>
#include<cmath>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int n;
	cin >> n;

	int  bin[8001];
	memset(bin, 0, 8001*sizeof(int));
	int sum = 0;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		sum += tmp;
		bin[tmp + 4000]++;
	}
	int avg = round((double)sum / n);
	
	

	int maxu = 1;
	int maxn = 0;
	vector<int> v;
	int mid = 0;
	int cnt = 0;
	int left, right;
	bool flag1, flag2;

	flag1=flag2= true;
	for (int i = 0; i < 8001; i++) {
		if (bin[i] == 0)
			continue;
		cnt += bin[i];
		int tmp = i - 4000;
		if (cnt > n / 2&&flag1) {
			mid = tmp;
			flag1 = false;
		}
		if (cnt >0 && flag2) {
			left = tmp;
			flag2 = false;
		}
		if (cnt == n) {
			right = tmp;
		}
		if (maxu < bin[i]) {
			maxu = bin[i];
			v.assign(1, tmp);
		}
		else if (maxu == bin[i]) {
			v.push_back(tmp);
		}
		
	}
	int busyn = 0;
	if (v.size() == 1)
		busyn = v[0];
	else
		busyn = v[1];
	int range = right - left;
	cout << avg << endl << mid << endl << busyn << endl << range << endl;
	
	return 0;
}