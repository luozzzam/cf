#include <iostream>

using namespace std;

const int N = 1e5 + 10;

int n;
int arr[N];
int l[N], r[N];

int main() {
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> arr[i];

    if (n == 1) {
        cout << 1 << "\n";
        return 0;
    }

    for (int i = 1; i <= n; ++i) {
        if (arr[i] > arr[i - 1])
            l[i] = l[i - 1] + 1;
        else
            l[i] = 1;
    }

    r[n] = 1;
    for (int i = n - 1; i >= 1; --i) {
        if (arr[i] < arr[i + 1])
            r[i] = r[i + 1] + 1;
        else
            r[i] = 1;
    }

    int ans = 0;

    for (int i = 1; i <= n; ++i) {
        if (arr[i + 1] - arr[i - 1] >= 2) {
            ans = max(ans, l[i - 1] + 1 + r[i + 1]);
        }
        if (i < n)
            ans = max(ans, l[i] + 1);
        if (i > 1)
            ans = max(ans, r[i] + 1);
    }

    cout << ans << "\n";
    return 0;
}
