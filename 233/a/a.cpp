#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<string>
#include<vector>

using namespace std;

const int N=2e5+10;

int T;

int n,m;
int arr[N];

int main(){
    cin>>n;
    if(n%2==1){
        cout<<-1<<endl;
        return 0;
    }
    for(int i=1;i<=n;++i){
        cout<<n-i+1<<" ";
    }
    cout<<endl;
    return 0;
}


