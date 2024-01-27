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
    scanf("%s",str);
    char st=str[0];
    int k=0;
    arr[k++]=st-'0';
    for(int i=1;i<strlen(str);i+=2){
        char op=str[i];
        char val=str[i+1];
        arr[k++]=val-'0';
    }
    sort(arr,arr+k); 
    cout<<arr[0];
    for(int i=1;i<k;++i){
        cout<<"+"<<arr[i];
    }
    return 0;
}


