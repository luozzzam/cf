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
int a,b;

int main(){
    cin>>n>>a>>b;
    for(int i=a+1;i<=n;i++){
        arr[i]+=1; 
    }
    for(int i=n-b;i<=n;++i){
        arr[i]+=1;
    }

    int ans=0;
    for(int i=1;i<=n;++i){
        if(arr[i]==2) ans++;
    }

    cout<<ans;
    return 0;
}


