#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<int> P(n, 0); 
    for (int i = 1; i < n; i++) {
        P[i] = P[i - 1] + (s[i] == s[i - 1] ? 1 : 0);
    }
    while(q--){
        int l,r,k;cin>>l>>r>>k;
        l--;r--;
        if(l==r){
            cout<<"YES\n";
            continue;
        }
        else {
            int b=P[r]-P[l];
            if(b<=2*k) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }

}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();}


    return 0;
}