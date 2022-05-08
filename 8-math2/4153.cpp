#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    
    while (true) {
        int a[4];
        cin >> a[0] >> a[1] >> a[2];
        if (a[0] == 0) break;
        sort(a, a+3);
        if (a[0] * a[0] + a[1] * a[1] == a[2] * a[2]) cout << "right" << endl;
        else cout << "wrong" << endl;
    }
	return 0;
}