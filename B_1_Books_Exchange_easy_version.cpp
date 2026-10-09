#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> pr;
vector<int> sz;
int ufind(int x){
    if(pr[x]==x) return x;
   return pr[x]=ufind(pr[x]);
}
void uunite(int x,int y){
   int px=ufind(x); int py=ufind(y);
   if(px==py) return ;
   if(sz[px]<sz[py]) swap(px,py);

   pr[py]=px;
   sz[px] +=sz[py];
}
void solve()
{
    int n;cin>>n;
    pr.resize(n+1);
    sz.assign(n+1,1);
    vector<int> p(n+1); for(int i=1;i<=n;i++)   cin>>p[i];
    for(int i=1;i<=n;i++){
         pr[i]=i;
    }
    for(int i=1;i<=n;i++){
        uunite(i,p[i]);
    }
    for(int i=1;i<=n;i++){
        cout<<sz[ufind(i)]<< " ";
    }


}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}

    return 0;
}