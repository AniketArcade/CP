#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
   int n ;cin>>n;
   char c;cin>>c;
   string s;cin>>s;
   int i=n/2;
   int j;
   if(n%2){
       j=i+2;
   }
   else j=i+1;
   i--;j--;
   int cnt=0;
   while(i>=0)
   {
    if(s[i]==s[j]) {
        i--;j++;
    }
    else if(s[i]==c || s[j]==c){
        cnt ++;
        i--;j++;
    }
    else{i--;j++; cnt +=2;}
   }
   cout<<cnt;
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}
    return 0;
}