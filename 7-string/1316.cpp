#include<iostream>
#include<string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    while (n--) {
        string s;
        cin >> s;
        bool word[27] = { false, };
        bool flag = true; // false 면 그룹문자아님
        for (int i = 0; i < s.size(); i++) {
            char target = s.at(i);
       
            if (i == 0) {
                
            }
     
            else {
                if (word[target - 'a']) {
                    //true면 이미 같은문자가 온적이 있다
                    if (s.at(i - 1) == target) {
                        // 연속인경우 > 아직 유효
                    }
                    else {
                        flag = false;
                        break;
                    }
                }
            }
            word[target - 'a'] = true; // a:0 b:1 ...
        }
        if (flag) cnt++;
    }
    cout << cnt << endl;
    return 0;
}