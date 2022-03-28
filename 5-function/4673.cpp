#include <iostream>
using namespace std;

int main(){
    bool flag[100001]={false, };
    for(int i=1;i<=10000;i++){
        if(!flag[i]){
            cout<<i<<endl;
        }
        int sum=i;
        int target=i;
        while(1){
            if(target>0){
                sum+=target%10;
                target/=10;
            }
            else break;
        }
        flag[sum]=true;
    }
    
}