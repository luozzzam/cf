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

int main(){
    cin>>n>>m;

    int possible;
    if(n%2==0){
        possible=n*n/2;
    }
    else{
        possible=(n/2)*(n/2);
        possible+=(n/2+1)*(n/2+1);
    }
    if(m>possible){
        cout<<"NO";
        return 0;
    }

    cout<<"YES\n";
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            board[i][j]='S';
        }
    } 

    int cnt=0;

    for(int i=0;i<n;++i){
        int st;
        if(i%2==0){
            st=0;
        }else{
            st=1;
        }
        for(int j=st;j<n;j+=2){
            if(cnt<m){
                board[i][j]='L';
                cnt++;
            }else{
                break;
            }
        }
    }

    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cout<<board[i][j];
        }
        cout<<"\n";
    }

    return 0;
}


