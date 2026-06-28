#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n,c;cin>>n>>c;
    vector<int> a;
    for(int i=0;i<n;i++){
     int x;cin>>x;
     a.push_back(x+i+1);
    }
    sort(a.begin(),a.end());
    // for(auto v:a) cout<<v<<",";
    // cout<<"--: ";
    int cnt=0;
    for(auto v:a){
        if(c>=v){
            cnt++;
            c -=v;
        }
        else break;
    }
    cout<<cnt
    
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}
    return 0;
}