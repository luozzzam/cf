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

//计算(x,y)属于第几象限
int calc(int x,int y){
    if(x>0&&y>0)return 1;
    if(x<0&&y>0)return 2;
    if(x<0&&y<0)return 3;
    if(x>0&&y<0)return 4;
    return 0;
}

int main(){
    int x,y;
    cin>>x>>y;
    int id=calc(x,y);
    int x1,y1,x2,y2;
    if(id==1){
        x1=0;
        y1=x+y;
        x2=x+y;
        y2=0;
    }
    else if(id==2){
        x2=0;
        y2=abs(x)+abs(y);
        x1=-abs(x)-abs(y);
        y1=0;
    }
    else if(id==3){
        x2=0;
        y2=-abs(x)-abs(y);
        x1=-abs(x)-abs(y);
        y1=0;
    }
    else{
        x1=0;
        y1=-abs(x)-abs(y);
        x2=abs(x)+abs(y);
        y2=0;
    }

    cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<"\n";

    return 0;
}


