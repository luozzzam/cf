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
char str[N*2];
char dest[N*2];

int check(char *s1,char *s2){
    int n1=strlen(s1),n2=strlen(s2);
    if(n1!=n2) return 0;
    int st1[26],st2[26];
    memset(st1,0,sizeof(st1));
    memset(st2,0,sizeof(st2));
    for(int i=0;i<n1;i++){
        st1[s1[i]-'A']++;
    }
    for(int i=0;i<n2;i++){
        st2[s2[i]-'A']++;
    }

    for(int i=0;i<26;i++){
        if(st1[i]!=st2[i]) return 0;
    }
    return 1;
}

int main(){
    scanf("%s",str1);
    scanf("%s",str2);
    scanf("%s",str);
    sprintf(dest,"%s%s", str1, str2);

    if(check(str,dest)) printf("YES\n");
    else printf("NO\n");

    
    return 0;
}


