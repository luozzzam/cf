#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>

using namespace std;

const int N=2e5+10;

int T;

int n,m;
int arr[N];
int a[6][6];

int main(){
    n=5,m=5;
    int x,y;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=m;++j){
            cin>>a[i][j];
            if(a[i][j]==1){
                x=i,y=j;
            }
        }
    }
    
    int tx=abs(x-3);
    int ty=abs(y-3);

    cout<<tx+ty<<"\n";
    

    return 0;
}


