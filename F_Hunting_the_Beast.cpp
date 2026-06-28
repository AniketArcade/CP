#include <bits/stdc++.h>
using namespace std;
const long long MOD = 998244353;
const int MAXN = 1000000;
static long long fact[MAXN+1], invfact[MAXN+1];

long long pw(long long b, long long e){
    b%=MOD; if(b<0) b+=MOD;
    long long r=1;
    while(e>0){ if(e&1) r=r*b%MOD; b=b*b%MOD; e>>=1; }
    return r;                      // pw(0,0)=1 by convention
}
void prep(){
    fact[0]=1;
    for(int i=1;i<=MAXN;i++) fact[i]=fact[i-1]*i%MOD;
    invfact[MAXN]=pw(fact[MAXN],MOD-2);
    for(int i=MAXN;i>0;i--) invfact[i-1]=invfact[i]*i%MOD;
}
inline long long C(int a,int b){
    if(b<0||b>a||a<0) return 0;
    return fact[a]*invfact[b]%MOD*invfact[a-b]%MOD;
}
int main(){
    prep();
    int T; scanf("%d",&T);
    while(T--){
        long long n,m; scanf("%lld %lld",&n,&m);
        long long t = n - m;
        long long sum = 0;
        for(long long j=0;j<=t;j++){
            long long base = (j + m - 1) % MOD;          // in [0, n-1]
            long long term = C((int)t,(int)j) * pw(base, n-1) % MOD;
            if((t - j) & 1) term = MOD - term;
            sum += term; if(sum>=MOD) sum-=MOD;
        }
        long long ans = sum * C((int)n,(int)m) % MOD * ((n-1)%MOD) % MOD;
        printf("%lld\n", ans);
    }
    return 0;
}