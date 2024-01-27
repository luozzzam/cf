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
        int st=(n/2)*(i-1)+1;
        int ed=n*n-(n/2)*(i-1);
        for(int j=0;j<n/2;++j){
            cout<<st+j<<" ";
        }
        for(int j=0;j<n/2;++j){
            cout<<ed-j<<" ";
        }
        cout<<"\n";
    }

    
    return 0;
}


