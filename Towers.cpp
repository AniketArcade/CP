#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    multiset<int> st;
    for(int i=0;i<n;i++)
    {
        auto it=st.upper_bound(a[i]);
        if(it!=st.end()){
            st.erase(it);
            st.insert(a[i]);
        }
        else st.insert(a[i]);
    }
    cout<<st.size();
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   // int t;cin>>t;while(t--)
   // {solve();if(t>0)cout<<"\n";}
   solve();
   return 0;
}