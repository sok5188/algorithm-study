#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        int size=s.size();
        string news;
        for(int i=0;i<size;i++){
            char target=s.at(i);
            string att;
            for(int j=0;j<n;j++){
                att.push_back(target);
            }
            news.append(att);
        }
        cout<<news<<endl;

    }
    return 0;
}