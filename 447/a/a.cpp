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

int n,m,p;
int arr[N];

int table[N];

int insert(int x,int p){
    x=x%p;
    if(table[x]!=0) return -1;
    table[x]=1;
    return 0;
}

int main(){
    cin>>p>>n;
    for(int i=1;i<=n;++i) cin>>arr[i];

    for(int i=1;i<=n;++i){
        int x=arr[i];
        int code=insert(x,p);
        if(code==-1){
            cout<<i<<"\n";
            return 0;
        }
    }

    cout<<-1<<'\n'; 
    return 0;
}


