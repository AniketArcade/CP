#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> divi[150010];
void pre(){
    for(int i=1;i<=150005;i++)
    {
     for(int j=i;j<=150005;j+=i){
        divi[j].push_back(i);
     }
    }
}

void solve()
{
   int n;cin>>n;
   vector<int> a(n+1);
   vector<int> p(n+1);
   p[0]=0;
   for(int i=1;i<=n;i++){
    cin>>a[i];
    p[i]=a[i]+p[i-1];
   }
   int ans=0;
   for(auto k:divi[n])
   {
    set<int> s;
    int i=1,j=k;
    while(j<=n){
        s.insert(p[j]-p[i-1]);
        i +=k;
        j+=k;
    }
    auto it=s.begin();
    auto dt=s.end();
    dt--;
    ans=max(ans,*dt-*it);


   }
   cout<<ans;

}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   pre();
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}

    return 0;
}