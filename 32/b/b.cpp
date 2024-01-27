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
char str[N];

int main(){
    int prefix_count=0;
    cin>>str;
    for(int i=0;i<strlen(str);++i){
        if(prefix_count==2){
            cout<<2;
            prefix_count=0;
        }
        if(str[i]=='-') prefix_count++;
        else{
            cout<<prefix_count;
            prefix_count=0;
        }
    }
    if(prefix_count>0) cout<<prefix_count;
    cout<<"\n";

    return 0;
}


