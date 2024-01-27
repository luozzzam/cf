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

void drawLine(int x){
    int empty=n-x;
    for(int i=0;i<empty;++i){
        cout<<" ";
        cout<<" ";
    }
    for(int i=0;i<x;++i){
        cout<<i<<" ";
    }
    
    cout<<x;

    for(int i=x-1;i>=0;--i){
        cout<<" "<<i;
    } 
    cout<<endl;
}


int main(){
    cin>>n;

    for(int i=0;i<=n;++i) drawLine(i);
    for(int i=n-1;i>=0;--i) drawLine(i);
    
    return 0;
}


