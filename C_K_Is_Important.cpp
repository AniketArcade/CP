#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n,k;cin>>n>>k;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    int ans=0;
    if(n>(2*k-2)){
        for(int i=k;i<=n-k+1;i++){
            ans +=a[i];
        }
         int i=n-k+2,j=k-1;
    int l=2*k-2;

    while(l>=k){
         if(a[i]>=a[j]){
            ans +=a[i];
            l--;
            i++;
            j--;
         }
         else {
            ans +=a[j];
            j--;i++;
            l--;
         }
    }
    }
    else
    {
            int i=k,j=n-k+1;
    int l=n;

    while(l>=k){
         if(a[i]>=a[j]){
            ans +=a[i];
            l--;
            i++;j--;
         }
         else {
            ans +=a[j];
            j--;i++;
            l--;
         }
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