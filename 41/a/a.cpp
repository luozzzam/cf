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
char str1[N],str2[N];
int main(){
    cin>>str1>>str2;
    int len1=strlen(str1);
    int len2=strlen(str2);

    if(len1!=len2){
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=0;i<len1;i++){
        if(str1[i]!=str2[len1-1-i]){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    
    return 0;
}


