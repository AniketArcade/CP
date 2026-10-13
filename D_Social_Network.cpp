#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> pr;
vector<int> sz;
int ufind(int x){ 
    if(pr[x]==x) return x; 
    return pr[x]=ufind(pr[x]);
}
bool umerge(int x,int y){
    int px=ufind(x);
    int py=ufind(y);
    if(px==py) return false;
    if(sz[px]<sz[py]) swap(px,py);
    pr[py]=px;
    sz[px] +=sz[py];
    return true;
}
void solve()
{
    int n,d;cin>>n>>d;
    pr.resize(n+1);
    sz.assign(n+1,1);
    for(int i=1;i<=n;i++) pr[i]=i;
    int extra=0;                      
    while(d--){
        int a,b;cin>>a>>b;
        if(!umerge(a,b)) extra++;      

        vector<int> comps;
        for(int i=1;i<=n;i++){
            if(ufind(i)==i) comps.push_back(sz[i]);
        }
        sort(comps.rbegin(), comps.rend());

        int ans=0;
        for(int i=0;i<=extra && i<(int)comps.size();i++) ans+=comps[i];
        cout<<ans-1<<"\n";
    }
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   solve();
    return 0;
}