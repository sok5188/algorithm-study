#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
    vector<int> v;
    string s1, s2;
    cin >> s1 >> s2;
    
    if (s1.size() < s2.size()) {
        int dis = s2.size() - s1.size();
        bool up = false;
        for (int i = s1.size() - 1; i >= 0; i--) {
           
            int a = s1.at(i)-'0';
            int b = s2.at(i + dis) - '0';
            int sum = a + b;
            if (up) {
                sum++;
                up = false;
            }
            if (sum >= 10) {
                sum -= 10;
                up = true;
            }
            v.push_back(sum);
        }
        for (int i = dis - 1; i >= 0; i--) {
            int a=s2.at(i) - '0';
            if (up) {
                a++;
                up=false;
            }
            if (a >= 10) {
                a -= 10;
                up = true;
            }
            v.push_back(a);
        }
        if (up) v.push_back(1); 
    }
    else {
        int dis = s1.size() - s2.size();
        bool up = false;
        for (int i = s2.size() - 1; i >= 0; i--) {

            int a = s2.at(i) - '0';
            int b = s1.at(i + dis) - '0';
            int sum = a + b;
            if (up) {
                sum++;
                up = false;
            }
            if (sum >= 10) {
                sum -= 10;
                up = true;
            }
            v.push_back(sum);
        }
        for (int i = dis - 1; i >= 0; i--) {
            int a = s1.at(i) - '0';
            if (up) {
                a++;
                up = false;
            }
            if (a >= 10) {
                a -= 10;
                up = true;
            }
            v.push_back(a);
        }
        if (up) v.push_back(1);
    }
    for (int i = v.size()-1; i >=0; i--) {
        cout << v.at(i);
   }
    
    return 0;
}