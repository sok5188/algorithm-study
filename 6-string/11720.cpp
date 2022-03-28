#include<iostream>
#include<cstring>
#include<string>

using namespace std;
int main() {
	int n;
	cin >> n;
	int sum = 0;
	string s;
	cin >> s;
	for (int i = 0; i < n; i++) {
		char a = s.at(i);
		int b = a - 48;
		sum += b;
	}
	cout << sum << endl;
	return 0;

}