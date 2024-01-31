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
char str[60][60];

int dx[4]={0,1,0,1};
int dy[4]={1,0,-1,0};


int main(){
    cin>>n>>m;

    memset(str,'.',sizeof(str));

    int op[4]={0,1,2,3};
    int cnt[4]={m-1,2,m-1,2};

    int x=1,y=1;
    int cur_op=0;
    int last_op_cnt=cnt[cur_op];

    while(1){
        if(x>n||x<1) break;
        if(y>m||y<1) break;
        str[x][y]='#';
        if(last_op_cnt==0){
            cur_op=(cur_op+1)%4;
            last_op_cnt=cnt[cur_op];
        }

        int tx=dx[cur_op];
        int ty=dy[cur_op];
        x=x+tx;
        y=y+ty;
        last_op_cnt--;
    }
    for(int i=1;i<=n;++i){
        for(int j=1;j<=m;++j){
            cout<<str[i][j];
        }
        cout<<endl; 
    } 
    return 0;
}


