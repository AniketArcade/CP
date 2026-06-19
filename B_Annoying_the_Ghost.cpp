#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
vector<int> a,b;

void solve()
{
    cin>>n;
    a.resize(n); b.resize(n);
    for(int i=0;i<n;i++) cin>>a[i];
      for(int i=0;i<n;i++) cin>>b[i];

    vector<int> L(n);
    bool poss = true;
    for (int i=0;i<n;i++){
        int pos=-1;
        for (int j=0;j<n;j++) {
            if (b[j]>=a[i]){pos=j+1;break;} 
        }
        if(pos==-1){poss=false;break;}
        L[i]=pos;
    }
    if(!poss){cout<<-1;return;}

    vector<bool> used(n + 1, false);
    vector<int> p(n);
    for (int i = 0; i < n; i++){
        int chosen = -1;
        for (int j = L[i]; j <= n; j++) {
            if (!used[j]) { chosen = j; break; }
        }
        if (chosen == -1) { poss = false; break; }
        used[chosen] = true;
        p[i] = chosen;
    }
    if(!poss){cout<<-1;return;}

    int ans=0;
    for (int i = 0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {

            if(p[i]>p[j])ans++;
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