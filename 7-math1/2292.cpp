#include<iostream>
#include<string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int layer = 1;
    int first = 1;
    int last = 2;
    while (true) {
        if (first <= n && last > n) {
            break;
        }
        first = last;
        last += 6 * layer;
        layer++;
    }
    cout << layer << endl;
    return 0;
}