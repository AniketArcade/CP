#include <bits/stdc++.h>
using namespace std;
#define int long long
int gcd(int a,int b){
    if(b==0) return a;
    else return gcd(b,a%b);
}
int lcm(int a,int b){
    return (a*b)/(gcd(a,b));
}
void solve()
{
    int n,x,y;cin>>n>>x>>y;
    int cnt1=n/x-(n/lcm(x,y));
    int cnt2=n/y-(n/lcm(x,y));
    int ans=0;
    ans += (cnt1*(2*n-cnt1+1))/2;
    ans -= (cnt2*(cnt2+1))/2;
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