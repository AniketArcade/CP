#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
vector<int>a,b;
int h[1001][1001];
void solve()
{
    cin>>n;
    a.resize(n);
    b.resize(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        {
            cin>>h[i][j];
        }
    }
    for(int i=0;i<n;i++) cin>>a[i];   
    for(int i=0;i<n;i++) cin>>b[i];
    



}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}

    return 0;
}
