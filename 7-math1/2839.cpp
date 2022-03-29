#include<iostream>
#include<string>
using namespace std;

int main() {
    int n;
    cin >> n;

    int three, cnt;
    three =  cnt = 0;
    int remainder = n % 5;
    int quotient = n / 5;
    if (n == 4) {
        cout << "-1" << endl;
    }
    else if (n == 7) {
        cout << "-1" << endl;
    }
    else {
    switch (remainder) {
    case 1:
        quotient--;
        three = 2;
        break;
    case 2:
        quotient -= 2;
        three = 4;
        break;
    case 3:
        three = 1;
        break;
    case 4:
        quotient--;
        three = 3;
        break;
    default:
        break;
    }
    cnt = quotient + three;
    cout << cnt;
    }
    
    return 0;
}