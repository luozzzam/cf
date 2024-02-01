#include <algorithm>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

typedef int (*Comparator)(const void *, const void *);

const int N = 2e5 + 10;

int T;

int n, m;
int arr[N];
char str1[N], str2[N];

void tolower(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] - 'A' + 'a';
    }
}

int cmp(const void *a, const void *b) {
    char *p1 = (char *)a, *p2 = (char *)b;
    int len1 = strlen(p1);
    int len2 = strlen(p2);
    tolower(p1);
    tolower(p2);
    for (int i = 0; i < min(len1, len2); i++) {
        if (p1[i] == p2[i])
            continue;
        return p1[i] - p2[i];
    }
    if (len1 == len2)
        return 0;
    return len1 - len2;
}

int main() {
    scanf("%s", str1);
    scanf("%s", str2);

    Comparator cmp1 = cmp;
    if (cmp1(str1, str2) < 0)
        printf("-1\n");
    else if (cmp1(str1, str2) > 0)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}
