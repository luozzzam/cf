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
int f[N],t[N];


int main(){
    cin>>n>>m;
    for(int i=0;i<n;++i){
        cin>>f[i]>>t[i];
    }
    
    int maxv=-1e9-10;
    for(int i=0;i<n;++i){
        if(t[i]<=m){
            maxv=max(maxv,f[i]); 
        }
        else maxv=max(maxv,f[i]-(t[i]-m));
    }
    cout<<maxv<<"\n"; 
    return 0;
}


