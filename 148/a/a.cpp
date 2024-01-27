#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<string>
#include<vector>

using namespace std;

const int N=2e5+10;

int T;

int n,m,k,l,d;
int arr[N];

int main(){
    cin>>k>>l>>m>>n;
    cin>>d;

    for(int i=1;i*k<=d;++i){
        arr[i*k]=1;
    }
    for(int i=1;i*l<=d;++i){
        arr[i*l]=1;
    }
    for(int i=1;i*m<=d;++i){
        arr[i*m]=1;
    }
    for(int i=1;i*n<=d;++i){
        arr[i*n]=1;
    }
    
    int ans=0;
    for(int i=1;i<=d;++i){
        if(arr[i]==1) ans++;
        //if(arr[i]==0) cout<<i<<"\n"; 
    }
    cout<<ans<<"\n";
    return 0;
}


