
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    vector<int> v;
    int tmp;
    int sum=0;
    for(int i=0;i<5;i++){
        
        cin>>tmp;
        sum+=tmp;
        v.push_back(tmp);
    }
    sort(v.begin(),v.end());
    cout<<sum/5<<endl<<v[2]<<endl;
    return 0;
}
