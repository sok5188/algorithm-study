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
    int n;
    cin >> n;

    while (n--) {
        int num;
        cin >> num;
      
        int tmp = num / 2;
        int leg = 0;
        while (true) {
            
            if (arr[tmp]) {
                tmp--;
                continue;
            }
            //소수긴함
            leg = num - tmp;
            if (arr[leg]) {
                tmp--;
                continue;
            }
            //둘다 소수
            break;
        }
        int a = max(tmp, leg);
        int b = min(tmp, leg);
        cout << b << " " << a << endl;

    }
    
	return 0;
}