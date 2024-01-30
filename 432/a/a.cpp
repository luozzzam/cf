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
    int cnt=0;

    for(int i=0;i<n;++i){
        cin>>arr[i];
        if(arr[i]<=5-m) cnt++;
    }

    cout<<cnt/3<<"\n";
    return 0;
}


