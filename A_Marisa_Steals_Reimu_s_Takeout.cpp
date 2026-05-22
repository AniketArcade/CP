#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;cin>>n;
    int w[n];
    int cnt0=0,cnt1=0,cnt2=0;
    for(int i=0;i<n;i++){
        cin>>w[i];
        if(w[i]%3==0)cnt0++;
        else if(w[i]%3==1)cnt1++;
        else cnt2++;
    }
    int ans=0;
    if(cnt2>cnt1){
        ans+=cnt1;
        cnt2-=cnt1;
        cnt1=0;
        ans += cnt2/3;

    }
    else if (cnt1>cnt2){
        ans+=cnt2;
        cnt1-=cnt2;
        cnt2=0;
        ans += cnt1/3;
    }
    else {
        ans+=cnt1;
    }
    ans += cnt0;
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
