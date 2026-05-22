#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int x, r, c;

    for (int i = 1; i <= 5; i++) {

        for (int j = 1; j <= 5; j++) {

            cin >> x;

            if (x == 1) {

                r = i;

                c = j;

            }

        }

    }

    cout << abs(r - 3) + abs(c - 3);
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
