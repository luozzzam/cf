#include <cinttypes>
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
    scanf("%s",str);
    int u_letters=0,l_letters=0;
    for(int i=0;i<strlen(str);++i){
        if(str[i]>='a'&&str[i]<='z') l_letters++;
        if(str[i]>='A'&&str[i]<='Z') u_letters++;
    }
    if(l_letters>=u_letters){
        for(int i=0;i<strlen(str);++i){
            if(str[i]>='a'&&str[i]<='z') cout<<str[i];
            else cout<<(char)(str[i]-'A'+'a');
        }
    }
    else{
        for(int i=0;i<strlen(str);++i){
            if(str[i]>='a'&&str[i]<='z') cout<<(char)(str[i]-'a'+'A');
            else cout<<str[i];
        }
    }
    cout<<endl;

    return 0;
}


