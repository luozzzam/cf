#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<string>
#include<vector>

using namespace std;

const int N=2e5+10;

int start;

int check(int x){
    int st[10];
    memset(st, 0, sizeof(st));

    while(x){
        int t=x%10;
        if(st[t]==1) return 1;
        x=x/10;
        st[t]=1;
    }
    return 0;
}

int main(){
    cin>>start;
    for(int i=start+1;;++i){
        if(check(i)==0){
            cout<<i<<"\n";
            break;
        }
    }


    return 0;
}


