#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

const int N = 2e5 + 10;

int T;

int n, m;
int arr[N];
char s[N];

vector<int> pos;

int main() {
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (arr[i] == 1)
            pos.push_back(i);
    }
    
    int st=-1;
    if(pos.size()>0) ans=1,st=pos[0];

    for (int i = 1; i < pos.size(); ++i) {
        if(abs(st-pos[i])>2) ans+=2;
        else ans+=pos[i]-st;
        st=pos[i];
    }
    cout << ans;
    return 0;
}
