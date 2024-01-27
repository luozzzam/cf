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
    cin>>n;
    cin>>str;
    int cnt=0;
    for(int i=0;i<strlen(str);++i){
        int j=i+1;
        while(j<n&&str[j]==str[i]){
            j++;
        }
        cnt+=j-i-1;
        i=j-1;
    }
    cout<<cnt<<"\n";
    return 0;
}


