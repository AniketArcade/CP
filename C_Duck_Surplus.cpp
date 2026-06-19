#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
vector<int> a;

void solve()
{
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int ansmax=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<ansmax) ansmax +=a[i];
        else ansmax=a[i]; 
    }
    cout<<ansmax;
}

signed main()
{
      ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}
    return 0;
}