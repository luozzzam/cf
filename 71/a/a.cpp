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
int main(){ 
    cin>>n;
    for(int i=0;i<n;++i){
        scanf("%s",str);
        if(strlen(str)>10){
            printf("%c%d%c\n",str[0],strlen(str)-2,str[strlen(str)-1]);
        }
        else{
            printf("%s\n",str);
        }
    } 
    return 0;
}


