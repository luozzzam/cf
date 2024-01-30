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

    if(n<m){
        cout<<-1<<endl;
        return 0;
    }
    
    int c=0;
    for(int k=1;;k++){
        if(k*m<=n&&2*k*m>=n){
            c=k;
            break;
        }
    }

    int a=n-c*m;
    int b=c*m-a;

    cout<<a+b<<"\n";
    
    return 0;
}


