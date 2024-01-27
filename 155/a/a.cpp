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
    int ans=0;
    int st;
    cin>>st;

    int maxv=st,minv=st;
    for(int i=1;i<n;++i){
        cin>>arr[i];
        if(arr[i]>maxv){
            maxv=arr[i];
            ans++;
        }
        if(arr[i]<minv){
            minv=arr[i];
            ans++;
        } 

    }
    cout<<ans<<"\n"; 

    return 0;
}


