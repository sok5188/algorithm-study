#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
vector<long long> ans;
int idx;
int n;
long long k;
void merge(long long A[],int p,int q,int r) {
    int i =p;
    int j = q + 1;
    int t = 1;
    long long tmp[500001];
    while (i <= q and j <= r) {
        if (A[i] <= A[j]){
            tmp[t++] = A[i++];
        }
        else tmp[t++] = A[j++];
    }
    while (i <= q)
        tmp[t++]= A[i++];
    while (j <= r)
        tmp[t++] = A[j++];
    i = p; t = 1;
    while (i <= r){
        ans.push_back(tmp[t]);
        //cout<<tmp[t]<<endl;
        A[i++] = tmp[t++];
    }
       
}

void merge_sort(long long A[],int p,int r) {
    if (p < r) {
        int q = (p + r) / 2;
        merge_sort(A, p, q);
        merge_sort(A, q + 1, r);
        merge(A,p,q,r);
    }
}

int main(){
    
    cin>>n>>k;
    long long arr[500001];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    //idx=0;
    merge_sort(arr, 0, n-1);
    int answer=(ans.size()<k)? -1:ans[k-1];
    cout<<answer<<endl;
}
