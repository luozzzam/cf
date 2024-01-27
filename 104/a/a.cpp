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
    scanf("%d",&n);
    n-=10;
    if(n<=0) printf("0\n");
    else if(n>11) printf("0\n");
    else{
        if(n==1) printf("4\n");
        else if(n==10) printf("15\n");
        else printf("4\n");
    }

    return 0;
}


