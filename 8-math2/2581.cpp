#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    
    
    
    bool arr[10001] = { false, };
    arr[1] = true;
    for (int i = 2; i <= n; i++) {
        for (int j = 2; i * j <= n; j++) {
            arr[i * j] = true;
        }
    }
    int cnt = 0;
    int sum = 0;
    int mini = -1;
    for (int i = m; i <= n; i++) {
        if (!arr[i]) {
            sum += i;
            if (mini == -1)    mini = i;
        }
    }
    if (sum == 0) {
        cout << mini << endl;
    }
    else {
        cout << sum << endl<<mini << endl;
    }
    
    return 0;
}