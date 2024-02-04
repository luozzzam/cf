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

int a2[4]={1,2,4,3};
int a3[4]={1,3,4,2};
int a4[2]={1,4};

int main(){
    cin>>s;
    n=strlen(s);

    if(n==1){
        m=s[0]-'0';
    }
    else{
        char c[3];
        c[0]=s[n-2];
        c[1]=s[n-1];
        c[2]='\0';
        m=atoi(c);
    }
    int r2=m%4;
    int r3=m%4;
    int r4=m%2;

    int v1=1;
    int v2=a2[r2];
    int v3=a3[r3];
    int v4=a4[r4];

    int ans=(v1+v2+v3+v4)%5;

    cout<<ans<<endl;

    return 0;
}


