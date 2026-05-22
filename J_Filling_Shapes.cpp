#include <bits/stdc++.h>
using namespace std;
#define int long long
int binpow(int a,int b){
    if(b==0) return 1;
    if(b%2==0){
        int res=binpow(a,b/2);
        return (res*res);
    }
    else return (a*binpow(a,b-1));
    
}
void solve()
{
    int n;cin>>n;
    if(n%2) cout<<0;
    else{
        int c=n/2;
        cout<<binpow(2,c);
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