#include<iostream>
#include<string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int cnt = 0;
    bool flag = false; //문자가 오면 true로 변경 , 공백이오면 false로변경 다시문자가오면 
    //true로 다시변경 , cnt ++ 
    for (int i = 0; i < s.size(); i++) {
        char tmp = s.at(i);
        if (tmp == ' ') {
            if (flag) {
                //앞전에 문자가 왔었다.
                flag = false;
            }
        }
        else {
            if (!flag) cnt++;
            flag = true;
        }
    }
    cout << cnt << endl;

    return 0;
}
