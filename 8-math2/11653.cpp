#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 1) {

    }
    else {
        
        for (int i = 2; i <= n; i++) {
            if (n == 1) break;
                while (n%i==0) {
                    n = n / i;
                    printf("%d\n", i);
                }

            

        }
    }
    
    return 0;
}