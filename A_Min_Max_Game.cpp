#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int turn=1;
    while(a.size()>1)
    {
        if(turn ==1){
            bool fir=true;
          for(int i=0;i<a.size()-1;i++){
              if(a[i]==0 && a[i+1]==0){
                  a.erase(a.begin()+i);
                  fir =false;
                 a[i]=0;
                 break;
              }
          }
           if(fir) {
            bool ch=true;
            for(int i=0;i<a.size()-1;i++){
              if(a[i]==0 && a[i+1]==1){a.erase(a.begin()+i);
                  ch =false;
                 a[i]=1;
                 break;
                 
              }
              else if(a[i]==1 && a[i+1]==0){
                 a.erase(a.begin()+i);
                  ch =false;
                 a[i]=1;
                 break;
              }
          }
          if(ch) a.erase(a.begin());
           }
        }
        else {
             bool fir=true;
          for(int i=0;i<a.size()-1;i++){
              if(a[i]==1 && a[i+1]==1){
                  a.erase(a.begin()+i);
                  fir =false;
                 a[i]=1;
                 break;
              }
          }
           if(fir) {
            bool ch=true;
            for(int i=0;i<a.size()-1;i++){
              if(a[i]==0 && a[i+1]==1){a.erase(a.begin()+i);
                  ch =false;
                 a[i]=0;
                 break;
                 
              }
              else if(a[i]==1 && a[i+1]==0){
                 a.erase(a.begin()+i);
                  ch =false;
                 a[i]=0;
                 break;
              }
          }
          if(ch) a.erase(a.begin());
           }
        }
        turn=3-turn;;
     }
    
    if(a[0]==0) cout<<"Elsie";
    else cout<<"Bessie";
  
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}
    return 0;
}