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
    int s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    int ans=0;
    if(s2==s1) ans++;
    if(s3==s2||s3==s1) ans++;
    if(s4==s3||s4==s2||s4==s1) ans++;

    cout<<ans<<"\n";
    
    return 0;
}


