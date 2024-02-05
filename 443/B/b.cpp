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

int check(int st,int l){
    for(int i=st;i<st+l;++i){
        if(s[i]=='.'||s[i+l]=='.') continue;
        if(s[i]!=s[i+l]) return -1; 
    }
    return 0;
}

int main(){
    cin>>s;
    cin>>m;
    n=strlen(s);
    for(int i=n;i<n+m;++i) s[i]='.';
    //cout<<s<<endl;
    n=n+m;
    int ans=0;
    for(int k=1;2*k<=n;++k){
        for(int i=0;i+2*k-1<n;++i){
            if(check(i,k)==0) ans=2*k;
        }
    }

    cout<<ans<<"\n"; 
    return 0;
}


