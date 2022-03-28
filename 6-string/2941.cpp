#include<iostream>
#include<string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int cnt = s.size();
    char before = ' ';
    for (int i = 0; i < s.size(); i++) {
        char target = s.at(i);
        if (target == '-') {
            //c- d-
            if (before == 'c' || before == 'd') {
                // it is alphabet
                cnt--;
            }
        }
        else if (target == '=') {
            if ((i-2)>=0 && s.at(i-1)=='z'&&s.at(i-2)=='d') {
                cnt--;
                cnt--;
            }
            else if (before == 'c' || before == 's' || before == 'z') {
                // it is alphabet
                cnt--;
            }
        }
        else if (target == 'j') {
            if (before == 'l' || before == 'n') {
                // it is alphabet
                cnt--;
            }
        }
        before = target;
    }
    cout << cnt << endl;
    return 0;
}