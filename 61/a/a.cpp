#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
#include <iterator>
#include<string>
#include<vector>

using namespace std;

const int N=2e5+10;

int T;

int n,m;
int arr[N];
char str1[N];
char str2[N];
int main(){
    cin>>str1>>str2;

    for(int i=0;i<strlen(str1);++i){
        if(str1[i]==str2[i]) cout<<0;
        else cout<<1;
    }
    cout<<endl;
    return 0;
}


