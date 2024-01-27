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
int a[3][3];

int dx[5]={1,-1,0,0,0};
int dy[5]={0,0,1,-1,0};

int main(){
    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            cin>>a[i][j];
        }
    } 
    
    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            int cnt=0;
            for(int k=0;k<5;++k){
                int tx=i+dx[k];
                int ty=j+dy[k];
                if(tx<0||tx>2) continue;
                if(ty<0||ty>2) continue;

                cnt+=a[tx][ty];
            }
            if(cnt%2==1) cout<<0;
            else cout<<1;
        }
        cout<<endl;
    }

    return 0;
}


