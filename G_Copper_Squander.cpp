#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> pr;
vector<int> sz;
int union_find(int x){
    if(pr[x]==x) return x;
    return pr[x]=union_find(pr[x]);
}
bool union_merge(int x,int y){
    int px=union_find(x);
    int py=union_find(y);
    if(px==py) return false;
    if(sz[px]<sz[py]) swap(px,py);
    pr[py]=px;
    sz[px]+=sz[py];
    return true;
}
void solve()
{
    int n,m,q;cin>>n>>m>>q;
    pr.resize(n+1);
    sz.assign(n+1,1); for(int i=1;i<=n;i++) pr[i]=i;
    vector<array<int,3>> edges(m);
    int total=0;
    for(int i=0;i<m;i++) {
        int u,v,d;cin>>u>>v>>d;
        edges[i]={d,u,v};
        total +=d;
    }
    sort(edges.begin(),edges.end());
    vector<int> w;
    for(auto [d,u,v]:edges){
        if(union_merge(u, v)) {
            w.push_back(d);
        }
    }
    vector<int> pref(w.size()+1,0);
    for(int i=0;i<w.size();i++){
        pref[i + 1] = pref[i] + w[i];
    }
    while(q--) {
        int x;
        cin>>x;
        int lo=0;
        int hi=w.size();
        while(lo<hi) {
            int mid =(lo + hi) / 2;
            if(w[mid] - x * (n - mid - 1) >= 0)
                hi = mid;
            else
                lo = mid + 1;
        }
        int r = lo;
        int k = n - r - 1;
        int cost = pref[r] + x * k * (k + 1) / 2;
        int answer = total - cost;
        cout << answer << " ";
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