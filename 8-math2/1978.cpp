#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v;
    while (n--) {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int high =*max_element(v.begin(), v.end());
    bool arr[1001] = { false, };
    arr[1] = true;
    for (int i = 2; i < high; i++) {
        for (int j = 2;i*j<=high ; j++) {
            arr[i * j] = true;
        }
    }
    int cnt = 0;
    for (int i = 0; i < v.size(); i++) {
        if (!arr[v.at(i)]) cnt++;
    }
    cout << cnt << endl;
    return 0;
}