#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
#include <math.h>
using namespace std;
typedef unsigned long long  ull;

int arr[101][101];
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        for(int p=a;p<a+10;p++)
            for(int q=b;q<b+10;q++){
                arr[p][q]=1;
            }
    }
    int cnt=0;
    for(int i=0;i<100;i++)
        for(int j=0;j<100;j++)
            if(arr[i][j])
                cnt++;
    
    cout<<cnt<<endl;
    return 0;
   
}
