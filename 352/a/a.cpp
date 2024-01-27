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
    
    int num_zero=0;
    int num_five=0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        if(arr[i]==0) num_zero++;
        if(arr[i]==5) num_five++;
    }
    
    if(num_zero==0) {
        cout<<-1<<endl;
        return 0;
    }

    int t=num_five%9;
    num_five=num_five-t;

    if(num_five<9){
        cout<<0<<endl;
        return 0;
    }

    for(int i=0;i<num_five;++i){
        cout<<5;
    }
    for(int i=0;i<num_zero;++i){
        cout<<0;         
    }

    cout<<endl;
    return 0;
}


