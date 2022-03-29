#include<iostream>
#include<string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int h, w,n;
        cin >> h >> w>>n;
        int quotient = (n-1) / h; // 0 > 호수
        int remainder = n % h; // 5 > 층수
        if (remainder == 0) remainder = h;
        if (++quotient < 10) {
            cout << remainder << "0" << quotient << endl;
        }
        else {
            cout << remainder << quotient << endl;
        }

    }
    
    
    return 0;
}