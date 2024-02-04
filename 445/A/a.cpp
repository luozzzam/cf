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
char board[110][110];

int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};

void dfs(int x,int y,char color){
    if(x<0||x>=n) return ;
    if(y<0||y>=m) return ;
    if(board[x][y]!='.') return ;
    board[x][y]=color;
    for(int i=0;i<4;++i){
        int tx=x+dx[i];
        int ty=y+dy[i];
        if(color=='W') dfs(tx,ty,'B');
        else dfs(tx,ty,'W');
    }
}

int main(){
    cin>>n>>m;
    for(int i=0;i<n;++i) cin>>board[i];

    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(board[i][j]=='-') continue;
            if(board[i][j]=='.') dfs(i,j,'B');
        }
    }
    
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cout<<board[i][j];
        }
        cout<<"\n";
    }
    return 0;
}


