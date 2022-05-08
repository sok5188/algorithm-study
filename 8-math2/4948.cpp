#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    bool arr[250000] = { false, };
    arr[1] = true;
    for (int i = 2; i <= 249999; i++) {
        for (int j = 2; i * j <= 249999; j++) {
            arr[i * j] = true;
        }
    }
    while (true) {
        int n;
        cin >> n;
        if (n == 0)    break;
        
        int cnt = 0;

        for (int i = n+1; i <= 2 * n; i++) {
            if (!arr[i]) cnt++;
        }
        cout << cnt << endl;
    }
    
	return 0;
}