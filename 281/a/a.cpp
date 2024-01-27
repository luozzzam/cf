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
    cin>>str;
    if(str[0]>='a'&&str[0]<='z') str[0]=(char)(str[0]-'a'+'A');
    cout<<str;
    return 0;
}


