#include <bits/stdc++.h>
using namespace std;
#define int long long
int pr[5000001];int rk[5000001];
int find(int x){
    if(pr[x]==x) return x;
    else return pr[x]=find(pr[x]);
}
void add(int x,int y){
    int px=find(x);int py=find(y);
    if(px==py) return;
    if(rk[px]>=rk[py]){
        pr[py]=px;
        rk[px]+=rk[py];
    }
    else {
        pr[px]=py;
        rk[py]+=rk[px];
    }
}
void solve()
{
    int n,m;cin>>n>>m;
    for(int i=1;i<=n;i++){
        pr[i]=i;
        rk[i]=1;
    }
    for(int i=0;i<m;i++)
    {
        int k;cin>>k;
        int prev;
        for(int j=0;j<k;j++){
            int ai;cin>>ai;
            if(j>0) add(ai,prev);
            prev=ai;
        }
    }
    for(int i=1;i<=n;i++){
        cout<<rk[find(i)]<<" ";
    }

}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   // int t;cin>>t;while(t--)
   // {solve();if(t>0)cout<<"\n";}
   solve();
    return 0;
}