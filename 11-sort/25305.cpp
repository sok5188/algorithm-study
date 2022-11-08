#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    int n,k;
    cin>>n>>k;
    vector<int> v;
    int tmp;
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>tmp;
        
        v.push_back(tmp);
    }
    sort(v.begin(),v.end());
    
    cout<<v[n-k]<<endl;
    return 0;
}
