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
    int ans=0;
    for(int i=0;i<n;i++){
        char str[100];
        scanf("%s",str);
        if(str[0]=='+'||str[1]=='+') ans++;
        if(str[0]=='-'||str[1]=='-') ans--;
    }

    cout<<ans<<endl;

    return 0;
}


