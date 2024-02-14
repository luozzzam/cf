#include<iostream>
#include <cstdio>
#include <cstring>

using namespace std;

const int N=2e5+10;

int arr[N];
int p[N];

void solve(){
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;++i) scanf("%d",&arr[i]);
    
    int k=1;
    p[1]=-1;
    for(int i=2;i<=n;++i){
        if(arr[i]==arr[i-1]) p[i]=p[i-1];
        else p[i]=i-1;
    }

    int m;
    scanf("%d",&m);
    while(m--){
        int l,r;
        scanf("%d%d",&l,&r);
        if(p[r]>=l) printf("%d %d\n",p[r],r);
        else printf("-1 -1\n");
    }
    printf("\n");
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
