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
    int t=n*(n+1)/2;

    m%=t;

    for(int i=1;i<=n;i++){
        if(m<i){
            break; 
        }
        m-=i; 

    }

    cout<<m<<endl; 
    return 0;
}


