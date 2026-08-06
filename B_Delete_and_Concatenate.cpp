#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n,c;
    cin>>n>>c;
    vector<int> a(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    int ans=sum-c*n;
    vector<int> b;;
    for(int i=0;i<n;i++){
        b.push_back(c-a[i]);
    }
    sort(b.rbegin(),b.rend());
    for(int i=0;i<n/2;i++){
        if(b[i]>0){
            ans += b[i];
        }
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