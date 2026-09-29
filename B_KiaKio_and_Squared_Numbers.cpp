#include <bits/stdc++.h>
using namespace std;
#define int long long
int newx(int x){
    int ans=0;
    while(x!=0){
        int rem=x%10;
        x/=10;
        ans +=rem*rem;
    }
    return ans;
}
void solve() {
   int n;cin>>n;
   vector<int> a(n+1);
   for(int i=1;i<=n;i++){
    cin>>a[i];
    for(int k=0;k<100;k++){
        a[i]=newx(a[i]);
    }
   }
   int cnt=0;
   for(int i=1;i<=n;i++){
    for(int j=i+1;j<=n;j++){
        if(a[i]==a[j]){
            cnt++;
        }
    }
   }
   cout<<cnt;
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
        if (t > 0)
            cout << "\n";
    }

    return 0;
}