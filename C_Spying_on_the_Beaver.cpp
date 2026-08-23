#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;cin>>n;
    for(int i=1;i<n;i++) {
        int x;cin>>x;
    }
    int m;cin>>m;
    vector<int> ms(m);
    for(int i=0;i<m;i++){
       cin>>ms[i];
    }
    if(m==1) {
        cout<<0;
        return;
    }
    cout<<m-1<<" ";
    bool check=false;
    for(int i=0;i<m;i++){
        if(ms[i]==1) {check=true;break;}
    }

   if(check){
     for(int i=0;i<m;i++)
    {
        if(ms[i]==1) continue;
        cout<<ms[i]<< " ";
    }
   }
   else {
    for(int i=0;i<m-1;i++)
    {
        cout<<ms[i]<< " ";
    }
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