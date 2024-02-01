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

int d1[4]={0,0,1,1};
int d2[4]={0,1,0,1};

int calc1(int a,int b,int c,int op1,int op2){
    int ans=0;
    if(op1==0&&op2==0) ans=(a+b)+c;
    if(op1==0&&op2==1) ans=(a+b)*c;
    if(op1==1&&op2==0) ans=(a*b)+c;
    if(op1==1&&op2==1) ans=(a*b)*c;
    return ans;
}

int calc2(int a,int b,int c,int op1,int op2){
    int ans=0;
    if(op1==0&&op2==0) ans=a+(b+c);
    if(op1==0&&op2==1) ans=a*(b+c);
    if(op1==1&&op2==0) ans=a+(b*c);
    if(op1==1&&op2==1) ans=a+(b+c);
    return ans;
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int ans=0;
    for(int i=0;i<4;++i){
        int op1=d1[i];
        int op2=d2[i];
        int t1=calc1(a,b,c,op1,op2);
        int t2=calc2(a,b,c,op1,op2); 
        int t=max(t1,t2);
        if(t>ans) ans=t;
    }
    cout<<ans<<"\n";
    
    return 0;
}


