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
vector<int> cnt[N];

void solve(){
    cin>>n;
    for(int i=0;i<n;++i) cin>>arr[i];
    for(int i=0;i<26;++i) cnt[0].push_back(i);

    for(int i=0;i<n;++i){
        int x=arr[i];
        int c=cnt[x].back();
        cnt[x].pop_back();
        cnt[x+1].push_back(c);
        cout<<(char)(c+'a');
    }
    cout<<"\n";
}

int main(){
    cin>>T;
    while(T--) solve();

    
    return 0;
}


