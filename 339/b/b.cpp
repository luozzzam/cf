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
    for(int i=1;i<=m;i++){
        cin>>arr[i];
    }
    int start=1;
    long long step=0;

    for(int i=1;i<=m;++i){
        if(arr[i]>=start){
            step=step+arr[i]-start;
        }else{
            step=step+n-start+arr[i];
        }
        start=arr[i];
    }
    cout<<step<<"\n"; 
    return 0;
}


