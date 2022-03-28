#include<iostream>
#include<string>
using namespace std;

int main() {
    char c1[4];
    char c2[4];
  
    cin >> c1 >> c2;
    cin.ignore();
    char tmp;
    int num1, num2;
    tmp = c1[0];
    c1[0] = c1[2];
    c1[2] = tmp;
    tmp = c2[0];
    c2[0] = c2[2];
    c2[2] = tmp;
    num1 = atoi(c1);
    num2 = atoi(c2);
    
    if (num1 > num2) cout << num1 << endl;
    else cout << num2 << endl;
    return 0;
}