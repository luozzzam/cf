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

//统计数组中奇数的个数
int calcOdd(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;++i){
        if(arr[i]&1){
            sum++;
        }
    }
    return sum;
}

//统计数组中偶数的个数
int calcEven(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;++i){
        if(!(arr[i]&1)){
            sum++;
        }
    }
    return sum;
}

int main(){
    cin>>n;
    int sum=0;
    for(int i=0;i<n;++i){
        cin>>arr[i];
        sum+=arr[i];
    }

    if(sum&1){
        cout<<calcOdd(arr,n)<<"\n";
    }else{
        cout<<calcEven(arr,n)<<"\n";
    }
    
    return 0;
}


