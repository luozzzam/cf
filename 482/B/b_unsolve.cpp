#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

const int N = 2e5 + 10;
const unsigned int INF = 0xffffffff;

struct Node {
    int l, r;
    unsigned int v;
    Node(int l = 0, int r = 0, unsigned int v = 0) : l(l), r(r), v(v) {}
};

int T;

int n, m;
unsigned int arr[N];
int l[N], r[N];

Node tree[N * 4];

// 判断x的第i位是不是1
int check(unsigned int x, int digit) { return (x >> digit) & 1; }

void pushup(int root) {
    int left = root * 2, right = root * 2 + 1;
    tree[root].v = tree[left].v & tree[right].v;
}

void build(int root, int l, int r) {
    if (l > r)
        return;
    tree[root] = Node(l, r, arr[root]);
    if (l == r)
        return;
    int mid = (l + r) / 2;
    build(root * 2, l, mid);
    build(root * 2 + 1, mid + 1, r);
    pushup(root);
}

void addDigit(int root, int l, int r, int digit) {
    if (tree[root].l > r || tree[root].r < l)
        return;
    if (l <= tree[root].l && r >= tree[root].r) {
        tree[root].v = tree[root].v | (1 << digit);
    }
    if (l == r)
        return;
    addDigit(root * 2, l, r, digit);
    addDigit(root * 2 + 1, l, r, digit);
}

void add(int root, int l, int r, unsigned int x) {
    for (int digit = 0; digit < 32; digit++) {
        // 如果x的第digit位是1
        if (check(x, digit)==1){
            addDigit(root, l, r, digit);
        }
    }
}

unsigned int query(int root, int l, int r) {
    unsigned int ans = INF;
    if (l <= tree[root].l && r >= tree[root].r) {
        return tree[root].v;
    }
    int mid = (tree[root].l + tree[root].r) / 2;
    if (l <= mid)
        ans = ans & query(root * 2, l, r);
    if (r > mid)
        ans = ans & query(root * 2 + 1, l, r);
    return ans;
}

int main() {
    scanf("%d%d", &n, &m);
    memset(arr, 0, sizeof(arr));

    build(1, 0, n);

    bool flag = true;

    for (int i = 0; i < m; ++i) {
        int ll, rr;
        unsigned int qq;
        scanf("%d%d%u", &ll, &rr, &qq);
        add(1, ll, rr, qq);
        if (query(1, ll, rr) != qq) {
            flag = false;
        }
    }

    if (flag == false) {
        printf("NO\n");
        return 0;
    }

    printf("YES\n");
    for (int i = 1; i <= n; ++i) {
        printf("%d ", query(1, i, i));
    }
    printf("\n");

    return 0;
}
