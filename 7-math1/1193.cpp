#include<iostream>
#include<string>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    bool flag = false; // false: inverse
    int layer = 1;
    int count = 1;
    while (true) {
        if (n >= count && n < count + layer) {
            break;
        }
        count += layer;
        layer++;
    }
    if (layer % 2 == 0) {
        flag = true;
    }
    
    if (flag) {
        cout << n-count + 1 << "/" << layer - (n-count) << endl;
    }
    else {
        cout << layer - (n-count) << "/" << n-count + 1 << endl;
    }
    
    
    
    return 0;
}