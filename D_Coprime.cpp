#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> g[1001];
int gcd(int a,int b){
    if(b==0) return a;
    else return gcd(b,a%b);
}
void pre(){
   for(int i=1;i<=1000;i++){
    for(int j=1;j<=1000;j++){
        if(gcd(i,j)==1) g[i].push_back(j);
    }
   }
    
}
void solve()
{
    int n;cin>>n;
    vector<int> a(n+1);for(int i=1;i<=n;i++) cin>>a[i];

    vector<int> mp(1001,0);

    int ans=0;
    for(int i=1;i<=n;i++)
    {
        mp[a[i]]=i;
     for(auto v:g[a[i]]){
        if(mp[v]>0){
            ans=max(ans,i+mp[v]);
        }
     }

    }
    if(ans==0) cout<<-1;
    else cout<<ans;


}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   pre();
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}
 

    return 0;
}