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

int n,m,k;
int arr[N];
char s[N];

int check(char *str,int l,int r){//[l,r]
    if(l>r) return 0;
    while(l<=r){
        if(str[l]!=str[r]) return 0;
        l++,r--;
    }
    return 1;
}

int main(){
    cin>>s;
    cin>>k;

    n=strlen(s);
    
    if(n%k!=0){
        cout<<"NO"<<endl;
        return 0;
    }

    int slen=n/k;

    for(int i=0;i<k;++i){
        if(check(s,i*slen,(i+1)*slen-1)==0){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;    

    return 0;
}


