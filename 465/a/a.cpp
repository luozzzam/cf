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
char s[N];

int main(){
    cin>>n;
    cin>>s;

    int cnt=0;
    for(int i=0;i<n;++i){
        if(s[i]=='1'){
            cnt++;
        }else{
            break;
        }
    }
    int ans=min(n,cnt+1);
    cout<<ans<<"\n"; 
    return 0;
}


