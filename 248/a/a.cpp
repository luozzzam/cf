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
int l[N],r[N];


int main(){
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>l[i]>>r[i];
    }
    
    int l_cnt=0,r_cnt=0;
    int ans=0;
    for(int i=0;i<n;++i){
        if(l[i]==0) l_cnt++;
        if(r[i]==0) r_cnt++;
    }

    ans+=min(l_cnt,n-l_cnt);
    ans+=min(r_cnt,n-r_cnt);

    cout<<ans<<"\n";

    return 0;
}


