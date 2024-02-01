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
char s[110][110];
int cnt[110][110];

int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};

int main(){
    cin>>n;    
    for(int i=1;i<=n;++i) cin>>s[i]+1;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j){
            for(int k=0;k<4;++k){
                int x=i+dx[k];
                int y=j+dy[k];
                if(x<1||x>n||y<1||y>n) continue;
                if(s[x][y]=='o') cnt[i][j]++;
            }  
        }
    }
    
    int ans=1;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j){
            if(cnt[i][j]%2!=0){
                ans=0;
                break;
            }
        }

    }
   
    if(ans==1) cout<<"YES";
    else cout<<"NO";
    return 0;
}


