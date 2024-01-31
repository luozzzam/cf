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

int main(){
    fgets(s,N,stdin); 
    n=strlen(s);
    for(int i=0;i<n;++i){
        if(s[i]<='z'&&s[i]>='a'){
            st[s[i]-'a']++;
        }
    }
    int ans=0;
    for(int i=0;i<26;++i){
        if(st[i]>0){
            ans++;
        }
    }
    
    cout<<ans;
    return 0;
}


