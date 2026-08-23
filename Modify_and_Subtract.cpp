#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    vector<int> l(n-1),r(n-1);

    l[0]=a[0];

    for(int i=1;i<n-1;i++){
        l[i]=a[i]-l[i-1];
    }

    r[n-2]=a[n-1];

    for(int i=n-3;i>=0;i--){
        r[i]=a[i+1]-r[i+1];
    }

    vector<int> pref(n-1),suf(n-1);

    pref[0]=(l[0]>=0);

    for(int i=1;i<n-1;i++){
        pref[i]=pref[i-1]&&(l[i]>=0);
    }

    suf[n-2]=(r[n-2]>=0);

    for(int i=n-3;i>=0;i--){
        suf[i]=suf[i+1]&&(r[i]>=0);
    }

    int ans=0;

    for(int i=0;i<n;i++){
        bool left=true,right=true;

        if(i>0)
            left=pref[i-1];

        if(i<n-1)
            right=suf[i];

        if(left&&right)
            ans++;
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