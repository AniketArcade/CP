#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;cin>>n;
    if(n==1)
    {
        cout<<1;
        return;
    }
    else if(n==2){
        cout<<-1;
    }
    else if(n==3){
        cout<<1<<" "<<2<<" "<<3;
    }
    else {
        cout<<1<<" "<<2<<" "<<3<<" ";
        int temp=3;
        for(int i=4;i<=n;i++)
        {
            cout<<temp*2<<" ";
            temp *=2;
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