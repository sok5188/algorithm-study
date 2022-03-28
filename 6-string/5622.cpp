#include<iostream>
#include<string>
using namespace std;

int main() {
   //to 1 : 2s +1:1s
    string s;
    cin >> s;
    int sec = 0;
    
    for (int i = 0; i < s.size(); i++) {
        char c = s.at(i);
        if (c == 'S') { c = 'P'; }// PQRS
        else if (c == 'Z')
        {
            c = 'W';

        } // WXYZ
        else if (c == 'V') c = 'T';
        else if (c == 'Y') c = 'W';
        int target = c - 'A';
        target = target / 3 + 2;
       
        sec += target+1;
    }
    
    cout << sec << endl;
    return 0;
}