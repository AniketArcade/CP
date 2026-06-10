#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string s;cin>>s;
    int n = s.size();
    int cnt1=0,cnt0=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1') cnt1++;
        else cnt0++;
    }

    int m=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            if(cnt0>0){
                cnt0--;
                m++;
            }
            else {
                break;
            }
        }
        else {
            if(cnt1>0){
                cnt1--;
                m++;
            }
            else {
                break;
            }
        }
    }
    cout<<n-m;
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();cout<<"\n";}
   return 0;
}