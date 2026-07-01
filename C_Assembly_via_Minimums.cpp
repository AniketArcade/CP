#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin>>n;
    int m=(n*(n-1))/2;
    vector<int> b(m);
    for(int i=0;i<m;i++) cin>>b[i];
    sort(b.begin(),b.end());
    vector<int> a(n);
   int idx = 0;
   for (int i=0;i<n-1;i++) {
    a[i]=b[idx];
    idx+=(n - i - 1);
   }
    a[n - 1]=1000000000;
   
    for(int i=0;i<n;i++) cout<<a[i]<<" ";

}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}


    return 0;
}