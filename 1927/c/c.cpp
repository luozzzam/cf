#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<string>
#include<vector>
#include<algorithm>
#include<unordered_set>

using namespace std;

const int N=2e6+10;

int T;

int n,m,k;
int arr1[N],arr2[N];
char s[N];

bool check(unordered_set<int> s1,unordered_set<int> s2){
    unordered_set<int> s;
    //合并两个set到s中
    for(auto x:s1) s.insert(x);
    for(auto x:s2) s.insert(x);
    return s.size()>=k;
}

void solve(){
    cin>>n>>m>>k;
    for(int i=0;i<n;++i) cin>>arr1[i];
    for(int i=0;i<m;++i) cin>>arr2[i];
    
    unordered_set<int> s1,s2;

    for(int i=0;i<n;++i){
        if(arr1[i]>k) continue;
        s1.insert(arr1[i]);
    }
    for(int i=0;i<m;++i){
        if(arr2[i]>k) continue;
        s2.insert(arr2[i]);
    }

    if(s1.size()<k/2||s2.size()<k/2) cout<<"NO"<<endl;
    else{
        if(check(s1,s2)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

int main(){
    cin>>T;
    while(T--) solve();

    return 0;
}


