#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;cin>>n;
    vector<string> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    vector<int> a(n);
    for(int i=0;i<n;i++){
        char SI=v[i][0];
        if(SI=='a' || SI=='b' || SI=='c'){
            a[i]=2;
        }
        else if(SI=='d' || SI=='e' || SI=='f'){
            a[i]=3;
        }
        else if(SI=='g' || SI=='h' || SI=='i'){
            a[i]=4;
        }
        else if(SI=='j' || SI=='k' || SI=='l'){
            a[i]=5;
        }
        else if(SI=='m' || SI=='n' || SI=='o'){
            a[i]=6;
        }
        else if(SI=='p' || SI=='q' || SI=='r' || SI=='s'){
            a[i]=7;
        }
        else if(SI=='t' || SI=='u' || SI=='v'){
            a[i]=8;
        }
        else if(SI=='w' || SI=='x' || SI=='y' || SI=='z'){
            a[i]=9;
        }
    }
    for(int i=0;i<n;i++) cout<<a[i];;
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