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
char s[N];

int x[N],y[N];

int calc(int m,int x,int y){
    if(m<x) return -1;
    if(m==x){
        if(y==0) return 0;
        else return -1;
    }
    if(y==0) return 0;
    return 100-y;
}


int main(){
    cin>>n>>m;
    for(int i=0;i<n;++i){
        cin>>x[i]>>y[i];
    }
    int ans=-1;

    for(int i=0;i<n;++i){
        ans=max(ans,calc(m,x[i],y[i]));
    }
    cout<<ans<<endl; 
    return 0;
}


