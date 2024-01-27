#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<string>
#include<vector>

using namespace std;

const int N=2e5+10;

int T;

int n,m;
int arr[N];

int main(){
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int maxv=0,minv=10000;
    int maxi=0,mini=0;
    for(int i=0;i<n;++i){
        if(arr[i]>maxv) maxv=arr[i],maxi=i;
    }
    for(int i=n-1;i>=0;--i){
        if(arr[i]<minv) minv=arr[i],mini=i;
    }
    int ans=maxi-0+n-1-mini;
    
    if(maxi>mini) ans--;
    cout<<ans<<"\n";
    return 0;
}


