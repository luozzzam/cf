#include<cstring>
#include<cstdio>
#include<cmath>
#include<string>
#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;

const int N=2e5+10;

int T;

int n,m,k;
int arr[N];

int main(){
    cin>>n>>m>>k;
    if(n-1+m-1<k){
        cout<<-1;
        return 0;
    }
    if(n>m) swap(n,m);

    long long ans=0;

    if(k+1<=n){
        ans=max(1LL*m*(n/(k+1)),1LL*n*(m/(k+1)));
    }
    else if(k+1>n&&k+1<=m){
        ans=1LL*n*(m/(k+1));
    }else if(k+1>m&&k+2<=n+m){
        ans=1LL*n/(k+2-m);
    }

    cout<<ans;
    return 0;
}


