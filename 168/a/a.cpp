#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

const int N=2e5+10;
const double eps=1e-9;
int T;

int n,m;
int arr[N];

int main(){
    int x,y;
    cin>>n>>x>>y;
    double threshold=0.01*y;

    for(int i=0;;i++){
        if((double)(x+i)/n>threshold-eps){
            cout<<i<<endl;
            return 0;
        }
    }

    
    return 0;
}


