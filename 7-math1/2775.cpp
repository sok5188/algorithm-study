#include<iostream>
#include<string>
using namespace std;

int main() {
    int t;
    cin >> t;
    int arr[15][15];
    for (int i = 1; i < 15; i++) {
        arr[0][i] = i;
        arr[i][1] = 1;
    }
    for (int i = 1; i < 15; i++) {
        for (int j = 2; j < 15; j++)
        {
            arr[i][j] = arr[i][j - 1] + arr[i - 1][j];
        }
    }
    while (t--) {
        int k, n;
        cin >> k >> n;
        cout << arr[k][n] << endl;
    }
    return 0;
}