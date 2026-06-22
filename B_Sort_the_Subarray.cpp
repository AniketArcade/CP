#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;cin>>n;
    vector<int> a(n),d(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>d[i];
    int l,r;
    for(int i=0;i<n;i++){
        if(a[i]!=d[i]){
            l=i;
            break;
        }
    }
    for(int i=l;i<n;i++){
        if(a[i]!=d[i]){
            r=i;
            break;
        }
    }
    sort(a.begin()+l,a.begin()+r+1);
    while(l>0){
        if(d[l-1]<=d[l]) l--;
        else break;
    }
    while(r<n-1){
        if(d[r+1]>=d[r]) r++;
        else break;
    }
    l++;r++;
    cout<<l<<" "<<r;

}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}
    return 0;
}