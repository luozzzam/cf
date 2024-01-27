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

int isPrime(int x){
    for(int i=2;i*i<=x;++i){
        if(x%i==0) return 1;
    }
    return 0;
}

int main(){
    cin>>n>>m;
    for(int i=n+1;;++i){
        if(isPrime(i)==0){
            if(m==i) puts("YES");
            else puts("NO");
            break;
        }
    }
    return 0;
}


