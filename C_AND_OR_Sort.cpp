#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;cin>>n;
    string s;cin>>s;
    int pref[n+1];pref[0]=0;
    int suff[n+1];suff[n]=0;
    for(int i=1;i<=n;i++)
    {
        pref[i]=pref[i-1]+(s[i-1]=='1');
    }
    for(int i=n-1;i>=0;i--)
    {
        suff[i]=suff[i+1]+(s[i]=='1');
    }
    int ans=INT_MAX;
    if(s[0]=='1') {cout<<n-pref[n];return;}
    // if(pref[n]==0) {cout<<0;return;}
    // if(pref[n]==1) {cout<<1;return;}
    
    int i,j;
    for(j=0;j<n;j++){
        if(s[j]=='1') {i=j;break;}
    }
    j--;
    for( i=j;i<n;i++)
    {
        int cnt=0;
        cnt += pref[i+1];
        cnt += min(suff[i+1],n-i-1-suff[i]);
        ans=min(ans,cnt);
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