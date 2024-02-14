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

int n,k;
int arr[N];
char s[N];

void solve(){
    cin>>n>>k;
    int l=1,r=n;

    vector<int> ans(n);

    for(int i=0;i<k;++i){
        for(int j=i;j<n;j+=k){
            if(i%2==0){
                ans[j]=l;
                l++;
            }else{
                ans[j]=r;
                r--;
            }
        }
    }
    for(int i=0;i<n;++i) cout<<ans[i]<<" ";
    cout<<endl;
}

int main(){
    cin>>T;
    while(T--){
        solve();
    }
    
    return 0;
}


