#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int m=0,x=0;
    for(int i=0;i<2*n;i++)if(s[i]=='1') m++;
    for(int i=0;i<2*n;i++){
        if(s[i]=='1'){
            char nxt=s[((i + 1))%(2*n)];
            bool isRed=(i%2==0); 
            if(isRed){
                if(nxt=='1')x++;      
            }else{
                if(nxt=='0')x++;   
            }
        }
    }
    int redScore=m - x;
    int blueScore=x;
    cout<<redScore<<" "<<blueScore<<"\n";
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();}
    return 0;
}