#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
 int n,k;cin>>n>>k;
 set<int> s;
 for(int i=1;i<=n;i++)s.insert(i);
 auto it=s.begin();
 
 while(!s.empty()){
    for(int i=0;i<k;i++){
        it++;
            if(it==s.end()) it=s.begin();
    }
    if(it==s.end()) it=s.begin();
    cout<<*it<< " ";
    it=s.erase(it);
    if(!s.empty() && it==s.end()){
        it=s.begin();
    }
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