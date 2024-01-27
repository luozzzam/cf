#include <ios>
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
int increse[N],decrese[N];

int main(){
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>decrese[i]>>increse[i];
    }
    int cnt=0;
    int max_capacity=0; 
    for(int i=0;i<n;++i){
        cnt-=decrese[i];
        cnt+=increse[i];
        max_capacity=max(max_capacity,cnt);
    }
    cout<<max_capacity<<"\n";
    return 0;
}


