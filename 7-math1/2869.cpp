#include<iostream>
#include<string>
using namespace std;

int main() {
    int a, b, v;
    cin >> a >> b >> v;
    int n = (v - a) / (a - b);
    if ((double)(v - a) / (a - b) > n) n++;
    cout << ++n << endl;
    
    
    return 0;
}