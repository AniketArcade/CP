#include<bits/stdc++.h>
using namespace std;
const long long MOD = 998244353;
#define int long long
int modpow(int a, int b) {
    int res = 1; a %= MOD;
    while (b > 0) {
        if (b & 1) res = (res * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}
int modinv(int q) { return modpow(q, MOD - 2); }
// long long ans = (p * modinv(q)) % MOD;
signed main(){
    int t;cin>>t;while(t--){
        int n;cin>>n;
        int p=(n*(n+1))/2;
        int q=modpow(2,((n*(n-1))/2)+1);
        int num=max(p,q);
        for(int i=2;i*i<=num;i++){
            if(num%i==0){
                if((p%i==0) && (q%i==0)){
                    p /=i;
                    q /=i;
                }
            }
            if(i*i!=num){
                int s=num/i;
                if((p%s==0) && (q%s==0)){
                    p /=s;
                    q /=s;
                }

            }
        }
        int ans = (p * modinv(q)) % MOD;
        cout<<ans<<"\n";
    }
    return 0;
}