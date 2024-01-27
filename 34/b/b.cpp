#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

const int N=2e5+10;

int T;

int n,m;
int arr[N];

int main(){
    cin>>n>>m;
    for(int i=0;i<n;++i) cin>>arr[i];

    sort(arr,arr+n);
    int ans=0;
    for(int i=0;i<m;++i){
        if(arr[i]>=0) break;
        ans-=arr[i];
    }
    cout<<ans<<"\n";
    
    return 0;
}


