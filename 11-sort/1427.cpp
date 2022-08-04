#include <iostream>
#include<algorithm>
#include<cstring>
#include<vector>
#include<cmath>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int arr[30];
	for (int i = 0; i < s.size(); i++) {
		arr[i]=s.at(i)-'0';
	}
	sort(arr, arr + s.size());
	for (int i = s.size() - 1; i >= 0; i--)
		cout << arr[i];
	return 0;
}