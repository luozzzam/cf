#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<string>
#include<vector>
#include<algorithm>
#include<unordered_set>

using namespace std;

const int N=2e5+10;

int T;

int n,m;
int arr[N];

int main(){
    cin>>n;

    for(int i=0;i<n;++i){
        int angle;
        cin>>angle;
        
        //多边形的外角和等于360度
        //所以正多边形的外角一定要能被360整除
        if(360%(180-angle)==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}


