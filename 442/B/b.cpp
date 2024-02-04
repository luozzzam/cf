#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

const int N=2e5+10;
const double eps=1e-20;

int T;

int n,m;
int arr[N];
char s[N];
double dp[N][2];
double p[N];

int cmp(double a,double b){
    return a>b;
}

int main(){
    cin>>n;
    for(int i=1;i<=n;++i) cin>>p[i];
    
    sort(p+1,p+1+n,cmp);

    //for(int i=1;i<=n;++i) cout<<p[i]<<" ";
    //cout<<endl;

    if(1.0-p[1]<eps){
        printf("%.10lf\n",p[1]);
        return 0;
    }

    double ans=0.0;
    double f=1.0;
    double sum=0.0;
    for(int i=1;i<=n;++i){
        sum+=p[i]/(1-p[i]);
        f=f*(1-p[i]);
        ans=max(ans,f*sum);
    }
    
    for(int i=1;i<=n;++i) ans=max(ans,dp[i][1]);
    
    printf("%.10lf\n",ans);
    
    return 0;
}


