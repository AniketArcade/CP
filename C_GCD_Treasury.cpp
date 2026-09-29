#include <bits/stdc++.h>
using namespace std;
#define int long long
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b, a%b);
}
void solve()
{
 int n,x;cin>>n>>x;
 vector<int> a(n);
 for(int i=0;i<n;i++) cin>>a[i];
 int ans=0;
 for(int i=0;i<n;i++){
    if(gcd(a[i],x)!=1){
        ans +=a[i];
    }
 }   
 cout<<ans;
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)    {solve();if(t>0)cout<<"\n";}


    return 0;
}