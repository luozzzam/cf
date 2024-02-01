#include<iostream>

using namespace std;

const int N=2e5+10;

int T;

int n,m;
int arr[N];
char s[N];
int state[26];

int main(){
    cin>>n;
    cin>>(s+1);

    // cout<<s+1<<endl;
    for(int i=1;i<=n;++i){
        if(s[i]>='A'&&s[i]<='Z'){
            state[s[i]-'A']++;
        }
        
        else{
            state[s[i]-'a']++;
        }
    }

    int code=1;
    for(int i=0;i<26;++i){
        if(state[i]==0) code=0;
    }



    if(code) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}


