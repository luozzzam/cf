#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

typedef pair<int,int> PII ;

#define x first
#define y second

const int N=2e5+10;

int T;

int n,m;
int arr[N];
PII seg[N];

int main(){
    cin>>n>>m;
    for(int i=0;i<n;++i){
        cin>>seg[i].x>>seg[i].y;
    }
    
    sort(seg,seg+n);

    int st=1;
    int cur_aim=0;
    int ans=0;

    while(1){
        if(cur_aim>=n) break;
        if(st+m<=seg[cur_aim].x){
            st=st+m;
            continue;
        }
        else{
            ans+=seg[cur_aim].y-st+1;
            st=seg[cur_aim].y+1;
            cur_aim++;
        }
    }
    cout<<ans<<"\n";    
    return 0;
}


