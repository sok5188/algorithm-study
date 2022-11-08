#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int cnt;
string s;
int recursion(int l, int r){
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else {
        cnt++;
        return recursion(l+1, r-1);}
}

int isPalindrome(){
    return recursion(0, s.length()-1);
}

int main(){
    int n;
    cin>>n;
    while (n--) {
        cnt=1;
        
        cin>>s;
        int palin=isPalindrome();
        printf("%d %d\n",palin,cnt);
    }
   
}
