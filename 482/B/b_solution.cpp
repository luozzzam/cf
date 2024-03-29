#include <algorithm>
#include <cstdio>

const int N = 1000 * 1000;
const int MAXBIT = 30;
int l[N], r[N], q[N], a[N], t[4 * N];
int sum[N];

inline void build(int v, int l, int r) {
    if (l + 1 == r) {
        t[v] = a[l];
        return;
    }

    int mid = (l + r) >> 1;
    build(v * 2, l, mid);
    build(v * 2 + 1, mid, r);

    t[v] = t[v * 2] & t[v * 2 + 1];
}

inline int query(int v, int l, int r, int L, int R) {
    if (l == L && r == R) {
        return t[v];
    }
    int mid = (L + R) >> 1;
    int ans = (1ll << MAXBIT) - 1;

    if (l < mid)
        ans &= query(v * 2, l, std::min(r, mid), L, mid);
    if (mid < r)
        ans &= query(v * 2 + 1, std::max(l, mid), r, mid, R);

    return ans;
}

int main() {
    int n, m;
    scanf("%d %d\n", &n, &m);

    for (int i = 0; i < m; i++) {
        scanf("%d %d %d\n", &l[i], &r[i], &q[i]);
        l[i]--;
    }

    for (int bit = 0; bit <= MAXBIT; bit++) {
        for (int i = 0; i < n; i++)
            sum[i] = 0;
        for (int i = 0; i < m; i++) {
            if ((q[i] >> bit) & 1) {
                sum[l[i]]++;
                sum[r[i]]--;
            }
        }
        for (int i = 0; i < n; i++) {
            if (i > 0)
                sum[i] += sum[i - 1];

            if (sum[i] > 0) {
                a[i] |= (1 << bit);
            }
        }
    }

    build(1, 0, n);

    for (int i = 0; i < m; i++) {
        if (query(1, l[i], r[i], 0, n) != q[i]) {
            puts("NO");
            return 0;
        }
    }

    puts("YES");
    for (int i = 0; i < n; i++) {
        if (i)
            printf(" ");
        printf("%d", a[i]);
    }
    puts("");

    return 0;
}
