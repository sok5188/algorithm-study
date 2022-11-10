#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
#include <math.h>
using namespace std;
typedef unsigned long long  ull;

int main(){
    int max_val=-1;
    int idx_x,idx_y;
    idx_x=idx_y=0;
    int arr1[101][101],arr2[101][101];
    for(int i=0;i<9;i++)
        for(int j=0;j<9;j++){
            cin>>arr1[i][j];
            if(max_val<arr1[i][j]){
                idx_y=i;
                idx_x=j;
                max_val=arr1[i][j];
            }
        }
    cout<<max_val<<endl<<++idx_y<<" "<<++idx_x<<endl;
    return 0;
   
}
