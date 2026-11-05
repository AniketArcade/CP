#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int l,r;
    cin>>l>>r;
    int sum=0;
    for(int i=l;i<=r;i++) sum+=i;

    if( (sum>=l) && (sum<=r)){
        cout<<0;
        return;
    }

    if(sum<l){
        int ans=0;
        while(sum<l){
            sum -=l;
            l++;
            ans++;
        }
        cout<<ans;
        
        return;
    }
     int ans=0;
        while(sum>r){
            sum -=r;
            r--;
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