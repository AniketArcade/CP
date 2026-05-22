#include <bits/stdc++.h>
using namespace std;
#define int long long
bool check(int r, int g, int b, int w)
{
    int odd = 0;
    if (r % 2)odd++;
    if (g % 2)odd++;
    if (b % 2)odd++;
    if (w % 2)odd++;
    return odd <= 1;
}
void solve()
{
     int r, g, b,w;cin>>r>>g>>b>>w;
    if(check(r, g, b, w))
    {cout << "Yes";
return;
    }
    if(r>0 && g>0 && b>0)
    {        r--;
        g--;
        b--;       
        w += 3;
        if(check(r, g, b, w))
        {
        cout << "Yes";
            return;
        }
    }
    cout << "No";

    
}
signed main()
{
   ios_base::sync_with_stdio(0); 
   cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
   {solve();if(t>0)cout<<"\n";}
   
    return 0;
}