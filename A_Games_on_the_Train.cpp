#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;cin>>n;
    vector<int> a(n);
    int M=0,m=1e9;
    for(int i=0;i<n;i++){
        cin>>a[i];
        M=max(M,a[i]);
        m=min(m,a[i]);
    }
    cout<<M-m+1;

}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}
   

    return 0;
}