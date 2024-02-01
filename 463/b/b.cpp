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
    cin>>n;
    int ans=0;
    for(int i=0;i<n;++i){
        cin>>arr[i];
        ans=max(ans,arr[i]);
    }

    cout<<ans; 
    return 0;
}


