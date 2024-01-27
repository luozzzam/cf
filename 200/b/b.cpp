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
    int sum=0; 

    for(int i=0;i<n;++i){
        cin>>arr[i];
        sum+=arr[i];
    }
    double ans=1.0*sum/n;
    printf("%.12f\n",ans);
    return 0;
}


