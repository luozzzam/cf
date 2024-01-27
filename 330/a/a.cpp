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

char s[100][100];

int main(){
    cin>>n>>m;
    for(int i=0;i<n;++i) cin>>s[i];
    //for(int i=0;i<n;++i) cout<<s[i]<<"\n";
    int row[100],col[100];
    memset(row,0,sizeof(row));
    memset(col,0,sizeof(col));
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(s[i][j]=='S'){
                row[i]=1;
                col[j]=1;
            }
        }
    }
    int ans=0;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(row[i]==0||col[j]==0){
                ans++;
            }
        }
    }
    cout<<ans<<"\n";
    return 0;
}


