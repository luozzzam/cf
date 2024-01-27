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
    int t=m-n+1;

    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(i==j) cout<<t<<" ";
            else cout<<1<<" ";
        }
        cout<<endl;  

    }
    
    
    return 0;
}


