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
long long a;

int main(){
    scanf("%lld",&a);
    int cnt=0;
    while(a>0){
        int x=a%10;
        a/=10;
        if(x==4||x==7) cnt++;
    }
    if(cnt==4||cnt==7) puts("YES");
    else puts("NO");
    return 0;
}


