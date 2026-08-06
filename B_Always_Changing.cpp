#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
vector<vector<int> > a;
vector<int > v;
bool check(int x)
{
    if (x >= m) return true;

    multiset<int> top;
    int sum = 0;

    for (int k = n - 1; k >= 0; k--)
    {
        for (int j = 0; j < m; j++)
        {
            int val = a[k][j];
            top.insert(val);
            sum += val;

            if ((int)top.size() > x)
            {
                sum -= *top.begin();
                top.erase(top.begin());
            }
        }
        if (sum >= v[k]) return true;
    }
    return false;
}
void solve()
{
    cin>>n>>m;
    v.assign(n,0);
    a.assign(n,vector<int>(m,0));
    for(int i=0;i<n;i++) cin>>v[i]; 
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int ans=-1;
    int lo=0,hi=m;
     while(lo<=hi){
        int mid=(lo+hi)/2;
        if(check(mid)){
            ans=mid;
            hi=mid-1;
        }
        else{
            lo=mid+1;
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