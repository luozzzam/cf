#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

const int N=2e5+10;

int T;

int n,m;
int arr[N];

int a,b,c;
int main(){
    cin>>n;
    for(int i=0;i<n;++i){
        int ta,tb,tc;
        cin>>ta>>tb>>tc;
        a+=ta,b+=tb,c+=tc;
    }
    if(a==0&&b==0&&c==0) puts("YES");
    else puts("NO");
    return 0;
}


