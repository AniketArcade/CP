#include <bits/stdc++.h>
using namespace std;
#define int long long
int pu[200001][60];
int kth_ancestor(int u,int k)
{
    for(int i=0;i<60;i++)
    {
    if(k&(1LL<<i)){
        u=pu[u][i];
    }
    }
return u;
}


void solve()
{
    int n,k;cin>>n>>k;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++) pu[i][0]=a[i];
    
   
        for(int j=1;j<60;j++){
            for(int i=1;i<=n;i++){
                pu[i][j]=pu[pu[i][j-1]][j-1];
            }
        }
    
        cout<<kth_ancestor(1,k);


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