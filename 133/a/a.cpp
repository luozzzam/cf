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

int main(){
    char str[N];
    scanf("%s",str);
    int len=strlen(str);
    for(int i=0;i<len;i++){
        if(str[i]=='H'||str[i]=='Q'||str[i]=='9'){
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    
    return 0;
}


