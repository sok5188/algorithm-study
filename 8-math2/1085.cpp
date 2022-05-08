#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    bool arr[10001] = { false, };
    arr[1] = true;
    for (int i = 2; i <= 10000; i++) {
        for (int j = 2; i * j <= 10000; j++) {
            arr[i * j] = true;
        }
    }
    int x, y, w, h;
    cin >> x >> y >> w >> h;
    int a, b;
    a = w - x;
    b = h - y;
    int ans = min(min(x, y), min(a, b));
    cout << ans << endl;
    
	return 0;
}