#include<iostream>
#include<string>
using namespace std;

int main() {
    int a, b,c;
    cin >> a >> b >> c;
    
   
    if (b >= c) {
        cout << "-1" << endl;
    }
    else {
        int n = (a / (c - b));
        cout << ++n << endl;
    }
    
    return 0;
}