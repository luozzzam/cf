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

void solve(){
    cin>>n;
    cin>>s;
    int st=-1,ed=-1;
    for(int i=0;i<n;++i){
        if(s[i]=='B'){
            if(st==-1) st=i;
            ed=i;
        }
    }
    if(st==-1) cout<<0<<"\n";
    else cout<<ed-st+1<<"\n";
}

int main(){
    cin>>T;
    while(T--) solve();

    
    return 0;
}


