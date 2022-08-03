#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<numbers>
#include<iomanip>
#include<cmath>
using namespace std;

int main() {
	// simple is the best ! 
	int n;
	cin >> n;
	int count = 1;
	string num = "666";
	while (n > count) {
		int tmp = stoi(num);
		tmp++;
		num = to_string(tmp);
		int judge = num.find("666", 0);
		if (judge == -1)	continue;
		else count++;
	}
	cout << num << endl;
	return 0;
}