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
char str[N];

void printMessage(int x){
    if(x==0) printf("CHAT WITH HER!\n");
    else printf("IGNORE HIM!\n");
}

typedef void (*printer)(int);

int countDiff(char *str){
    int st[26];
    memset(st,0,sizeof(st));
    int len=strlen(str);
    for(int i=0;i<len;++i){
        st[str[i]-'a']=1;
    }
    int ans=0;
    for(int i=0;i<26;++i){
        if(st[i]==1) ans++;
    }
    return ans;
}

void solve(printer print,int (*count)(char*),char *str){
    int cnt=count(str);
    int code=cnt%2;
    print(code);
}

int main(){
    void (*print)(int)=printMessage;
    int (*count)(char*)=countDiff;

    scanf("%s",str);
    solve(print,count,str);

    return 0;
}


