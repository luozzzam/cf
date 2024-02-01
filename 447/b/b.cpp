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
int w[26];

int main(){
    cin>>s;
    cin>>m;
    for(int i=0;i<26;++i) cin>>w[i];

    int maxv=0;
    for(int i=0;i<26;++i) maxv=max(maxv,w[i]);

    n=strlen(s);

    int ans=0;

    int cur_val;
    for(int i=1;i<=n+m;++i){
        if(i<=n) cur_val=w[s[i-1]-'a'];
        else cur_val=maxv;
        
        ans+=cur_val*i;

    }
    cout<<ans<<"\n";
    
    return 0;
}


