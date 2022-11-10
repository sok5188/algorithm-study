#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
#include <math.h>
using namespace std;
typedef unsigned long long  ull;

int main(){
    int m,n;
    cin>>n>>m;
    int arr1[101][101],arr2[101][101];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>arr1[i][j];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>arr2[i][j];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cout<<arr1[i][j]+arr2[i][j]<<" ";
        cout<<endl;
    }
    return 0;
   
}
