#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,x,y;
int pr[200001],rk[200001];
int p[200001];
int union_find(int x)
{
    if(pr[x]==x)return x;
    return pr[x]=union_find(pr[x]);
}
void union_add(int x,int y)
{
    x=union_find(x);
    y=union_find(y);
    if(x==y)return;
    if(rk[x]<rk[y])swap(x,y);
    pr[y]=x;
    rk[x]+=rk[y];
}
void solve()
{
    cin>>n>>x>>y;
    for(int i=1;i<=n;i++)pr[i]=i,rk[i]=1;
    for(int i=1;i<=n;i++) cin>>p[i];
    for(int i=1;i<=n;i++){
         if(i+x<=n) union_add(i,i+x);
         if(i+y<=n) union_add(i,i+y);
    }
    for(int i=1;i<=n;i++){
        if(union_find(i)!=union_find(p[i])){
            cout<<"NO";
            return;
        }
    }
    cout<<"YES";
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}


    return 0;
}