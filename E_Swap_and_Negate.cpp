#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
int n;
cin >> n;
vector<int> b(n);
for (int i = 0; i < n; i++) {
    int x;
    cin>>x;
    if(i%2==0)
        b[i]=x;
    else
        b[i]=-x;
}
sort(b.begin(),b.end());
int ans = 0;
for (int i = 0; i < n; i++) {
    if(i<n/2)ans -= b[i];
    else ans += b[i];
}
cout<<ans;

}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}


    return 0;
}