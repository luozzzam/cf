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
    cin>>n>>m;
    cin>>str;
    for(int i=0;i<m;++i){
        for(int j=n-1;j>0;--j){
            char pre=str[j-1],post=str[j];
            if(pre=='B'&&post=='G'){
                swap(str[j-1],str[j]);
                --j;
            }
        }
    }

    cout<<str<<"\n";
    return 0;
}


