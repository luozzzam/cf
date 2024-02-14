#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

const int N = 510;

int T;

int n, m, b, mod;
int arr[N];
char s[N];

int dp[2][N][N];

int main() {
    cin >> n >> m >> b >> mod;
    for (int i = 1; i <= n; ++i)
        cin >> arr[i];

    int minv = N;
    for (int i = 1; i <= n; ++i)
        minv = min(minv, arr[i]);

    if (minv * m > b) {
        cout << 0 << endl;
        return 0;
    }

    dp[0][0][0] = 1;

    // dp[i][j][k]表示在前i个人写m行，bug总数为k的可能数量
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j <= m; ++j) {
            for (int k = 0; k <= b; ++k) {
                dp[1][j][k]=dp[0][j][k];
                
                if(j>0&&k-arr[i]>=0){
                    dp[1][j][k]=(dp[1][j][k]+dp[1][j-1][k-arr[i]])%mod;
                }

            }
        }
        memcpy(dp[0],dp[1],sizeof(dp[0]));
    }

    int ans=0;
    for(int i=0;i<=b;++i){
        ans=(ans+dp[1][m][i])%mod;
    }
    cout<<ans<<endl;

    return 0;
}
