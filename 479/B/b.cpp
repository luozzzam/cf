#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

typedef pair<int, int> PII;

#define x first
#define y second

const int N = 2e5 + 10;

int T;

int n, m;
char s[N];
vector<PII> trace;

int main() {
    cin >> n >> m;
    vector<PII> vec(n);
    int sum = 0;
    for(int i=1;i<=n;++i){
        int x;
        cin>>x;
        vec[i-1] = {x, i};
        sum+=x;
    }
    int aim=sum/n;

    if(n==1){
        cout<<0<<" "<<0<<endl;
        return 0;
    }

    sort(vec.begin(), vec.end());
    
    int add_l=0,add_r=0;
    int sub_l=n-1,sub_r=n-1;

    int op_cnt=0;
    while(op_cnt<m){
        if(vec[0].x==aim&&vec[n-1].x-aim<=1) break;

        while(add_r<n-1&&vec[add_r].x==vec[add_r+1].x) add_r++;
        while(sub_l>0  &&vec[sub_l].x==vec[sub_l-1].x) sub_l--;

        trace.push_back({vec[add_r].y,vec[sub_l].y});

        vec[add_r].x++;
        vec[sub_l].x--;

        if(add_r!=add_l) add_r--;

        if(sub_l!=sub_r) sub_l++;
        op_cnt++;
    }
    
    cout<<vec[n-1].x-vec[0].x<<" "<<trace.size()<<endl;

    for(int i=0;i<trace.size();++i){
        cout<<trace[i].y<<" "<<trace[i].x<<endl;
    }

    return 0;
}
