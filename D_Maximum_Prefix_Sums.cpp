#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; scanf("%d", &t);
    while (t--) {
        int n; scanf("%d", &n);
        char s[200005]; scanf("%s", s+1);
        vector<long long> a(n+2), c(n+2);
        for (int i = 1; i <= n; i++) scanf("%lld", &a[i]);
        for (int i = 1; i <= n; i++) scanf("%lld", &c[i]);
        
        bool ok = true;
        for (int i = 2; i <= n; i++) if (c[i] < c[i-1]) { ok = false; break; }
        
        if (ok) {
            vector<int> next_rise(n+2);
            next_rise[n+1] = n+1;
            for (int i = n; i >= 1; i--) {
                if (i == n) next_rise[i] = n+1;
                else if (c[i+1] > c[i]) next_rise[i] = i+1;
                else next_rise[i] = next_rise[i+1];
            }
            
            long long b_prev = 0;
            
            for (int i = 1; i <= n && ok; i++) {
                bool is_rise = (i == 1) || (c[i] > c[i-1]);
                
                if (is_rise) {
                    long long target = c[i];
                    if (s[i] == '1') {
                        if (b_prev + a[i] != target) { ok = false; break; }
                    } else {
                        a[i] = target - b_prev;
                    }
                    b_prev = target;
                } else {
                    if (s[i] == '1') {
                        b_prev += a[i];
                        if (b_prev > c[i]) { ok = false; break; }
                    } else {
                        int j = next_rise[i];
                        bool has_later_free = false;
                        int upto = (j > n) ? n : j;
                        for (int k = i+1; k <= upto; k++) {
                            if (s[k] == '0') { has_later_free = true; break; }
                        }
                        
                        if (j > n) {
                            long long max_partial = 0, run = 0;
                            for (int k = i+1; k <= n; k++) {
                                if (s[k] == '1') run += a[k];
                                if (run > max_partial) max_partial = run;
                            }
                            long long delta = c[i] - b_prev - max_partial;
                            if (delta > 0) delta = 0;
                            a[i] = delta;
                            b_prev += a[i];
                        } else if (has_later_free) {
                            long long max_partial = 0, run = 0;
                            for (int k = i+1; k < j; k++) {
                                if (s[k] == '1') run += a[k];
                                if (run > max_partial) max_partial = run;
                            }
                            long long delta = c[i] - b_prev - max_partial;
                            if (delta > 0) delta = 0;
                            a[i] = delta;
                            b_prev += a[i];
                        } else {
                            long long ksum = 0;
                            for (int k = i+1; k <= j; k++) ksum += a[k];
                            a[i] = c[j] - b_prev - ksum;
                            b_prev += a[i];
                            if (b_prev > c[i]) { ok = false; break; }
                            long long run = b_prev;
                            for (int k = i+1; k < j && ok; k++) {
                                run += a[k];
                                if (run > c[i]) { ok = false; break; }
                            }
                        }
                    }
                }
            }
        }
        
        if (ok) {
            printf("Yes\n");
            for (int i = 1; i <= n; i++) printf("%lld ", a[i]);
            printf("\n");
        } else {
            printf("No\n");
        }
    }
    return 0;
}