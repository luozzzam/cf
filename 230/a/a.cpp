#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

typedef pair<int,int> PII ;

#define x first
#define y second

const int N=2e5+10;

int T;

int n,m;
int arr[N];

PII dragon[N];

int main(){
    cin>>m>>n;
    for(int i=0;i<n;++i){
        cin>>dragon[i].x>>dragon[i].y;
    }

    sort(dragon,dragon+n);

    for(int i=0;i<n;++i){
        if(m<=dragon[i].x) {
            cout<<"NO"<<endl;
            return 0;
        }
        m+=dragon[i].y;
    }
    cout<<"YES"<<endl;
    
    return 0;
}


