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
int st[26];
vector<int> pos;

void print(char *s,int l,int r){
    for(int i=l;i<r;++i){
        putchar(s[i]);
    }
    putchar('\n');
}

int main(){
    cin>>m;
    cin>>s;
    for(int i=0;i<strlen(s);++i){
        int x=s[i]-'a';
        if(st[x]==0){
            pos.push_back(i);
            st[x]=1;
        }
    }
    int cnt=0;
    for(int i=0;i<26;++i){
        if(st[i]==1) cnt++;
    }
    
    if(cnt<m){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
        for(int i=0;i<m;++i){
            int l=pos[i];
            int r;
            if(i==m-1){
                r=strlen(s);
            }
            else r=pos[i+1];
            print(s,l,r);
        }
    }

    return 0;
}


