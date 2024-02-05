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
char t[N];

int st_s[26];
int st_t[26];

int check_tree() {
    int ret = 0;
    for (int i = 0; i < 26; ++i) {
        if (st_t[i] > st_s[i]) {
            ret = 1;
            break;
        }
    }
    return ret;
}

int check_automaton() {
    int st = 0;
    for (int i = 0; i < strlen(s); ++i) {
        if (st == strlen(t))
            break;
        if (t[st] == s[i])
            st++;
    }
    if (st == strlen(t))
        return 1;
    return 0;
}

int check_array() {
    for (int i = 0; i < 26; ++i) {
        if (st_t[i] != st_s[i])
            return 0;
    }
    return 1;
}

int main() {
    cin >> s;
    cin >> t;
    for (int i = 0; i < strlen(s); ++i) {
        st_s[s[i] - 'a']++;
    }
    for (int i = 0; i < strlen(t); ++i) {
        st_t[t[i] - 'a']++;
    }

    if (check_tree()) {
        cout << "need tree" << endl;
    } else if (check_automaton()) {
        cout << "automaton" << endl;
    } else if (check_array()) {
        cout << "array" << endl;
    } else {
        cout << "both" << endl;
    }
    return 0;
}
