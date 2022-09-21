#include <iostream>
#include <set>
using namespace std;
//인터넷 참고한 코드
int main() {
    string s;
    cin >> s;
 
    set<string> set;
 
    string str = "";
    for (int i = 0; i < s.size(); i++) {
        for (int j = i; j < s.size(); j++) {
            str += s[j];
            set.insert(str);
        }
        str = "";
    }
 
    cout << set.size();
}
