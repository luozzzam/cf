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
    for(int i=1;i<=n;++i){
        int x;
        cin>>x;
        arr[x]=i;
    }
    for(int i=1;i<=n;++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}


