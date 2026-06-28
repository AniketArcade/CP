#include <bits/stdc++.h>
using namespace std;

static const int MOD = 998244353;

// ---- fast input ----
static char ibuf[1 << 20];
int ilen = 0, ipos = 0;
inline int gc() {
    if (ipos == ilen) {
        ilen = (int)fread(ibuf, 1, sizeof(ibuf), stdin);
        ipos = 0;
        if (ilen == 0) return -1;
    }
    return ibuf[ipos++];
}
inline long long readInt() {
    int c = gc();
    while (c != '-' && (c < '0' || c > '9')) {
        if (c == -1) return -1;
        c = gc();
    }
    int sign = 1;
    if (c == '-') { sign = -1; c = gc(); }
    long long x = 0;
    while (c >= '0' && c <= '9') { x = x * 10 + (c - '0'); c = gc(); }
    return x * sign;
}

int main() {
    int t = (int)readInt();
    string out;
    out.reserve(1 << 20);

    static vector<unsigned int> a;
    while (t--) {
        int n = (int)readInt();
        a.resize(n);
        unsigned int T = 0;
        for (int i = 0; i < n; i++) {
            a[i] = (unsigned int)readInt();
            T ^= a[i];
        }

        long long ans;
        if (n == 1) {
            ans = 0;                       // no valid move ever exists
        } else if (T == 0) {
            ans = 1;                       // the single "take everything" move
        } else {
            int h = 31 - __builtin_clz(T); // highest set bit of T
            unsigned int mask = 1u << h;
            long long cnt = 0;
            for (int i = 0; i < n; i++)
                if (a[i] & mask) cnt++;
            ans = cnt % MOD;
        }

        out += to_string(ans);
        out += '\n';
    }

    fwrite(out.data(), 1, out.size(), stdout);
    return 0;
}