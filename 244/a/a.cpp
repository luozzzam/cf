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
vector<int> ans[N];
int vis[N];

int main(){
    cin>>n>>m;
    for(int i=1;i<=m;++i){
        cin>>arr[i];
        ans[i].push_back(arr[i]);
        vis[arr[i]]=1; 
    }

    int st=1;
    for(int i=1;i<=n*m;++i){
        if(ans[st].size()>=n){
            st++;
            i--;
            continue;
        }
        if(vis[i]==1) continue;
        ans[st].push_back(i);
    }

    for(int i=1;i<=m;++i){
        for(int j=0;j<ans[i].size();++j){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl; 
    } 
    return 0;
}


