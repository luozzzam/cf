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

int main(){
    cin>>n>>m;
    for(int i=0;i<m;++i){
        cout<<n-i<<" ";
    }
    for(int i=0;i<n-m;++i){
        cout<<i+1<<" ";
    }
    cout<<"\n";
    
    return 0;
}


