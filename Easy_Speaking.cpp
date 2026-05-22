#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;cin>>n;
    string s;cin>>s;
    bool isHard=false;
    for(int i=0;i<=n-4;i++)
    {
        bool iscon=true;
       for(int j=i;j<i+4;j++)
       {
           if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u')
           {
               iscon=false;
               break;
           }
       }
       if(iscon)
       {
           isHard=true;
           break;
       }
    }
    if(isHard)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
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