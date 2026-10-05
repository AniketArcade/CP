#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<vector<int>> arr(9,vector<int>(9,0));
bool check(){
      for(int i=1;i<=8;i++){
            for(int j=1;j<=8;j++){
                if(!arr[i][j]) return false ;
            }
      }
      return true;
}
bool isf=0;
void printer(){
    for(int i=1;i<=8;i++){

        for(int j=1;j<=8;j++){
            cout<<arr[i][j]<< " ";
        }
        cout<<"\n";
    }
}
vector<pair<int,int> >neigh(int x,int y){
    vector< pair<int,int> > ne;
    if( (x+2<=8) && (y+1)<=8 ) ne.push_back({x+2,y+1});
    if( (x+1<=8) && (y+2)<=8 ) ne.push_back({x+1,y+2});
     if( (x+2<=8) && (y-1)>=1 ) ne.push_back({x+2,y-1});
      if( (x+1<=8) && (y-2)>=1 ) ne.push_back({x+1,y-2});
       if( (x-2>=1) && (y+1)<=8 ) ne.push_back({x-2,y+1});
        if( (x-2>=1) && (y-1)>=1 ) ne.push_back({x-2,y-1});
         if( (x-1>=1) && (y+2)<=8 ) ne.push_back({x-1,y+2});
          if( (x-1>=1) && (y-2)>=1 ) ne.push_back({x-1,y-2});

    return ne;
}
void dfs(int x,int y,int level)
{
    if(level==64) {
        if(check())
        {printer();isf=1;}
        else return ;
    }

    auto cand = neigh(x,y);
    auto onward = [&](pair<int,int> p){
        int c = 0;
        for(auto w : neigh(p.first,p.second))
            if(!arr[w.first][w.second]) c++;
        return c;
    };
    sort(cand.begin(), cand.end(), [&](auto &a, auto &b){
        return onward(a) < onward(b);
    });
    for(auto v:cand){
        if(isf) return ;
        if(!arr[v.first][v.second]){
             arr[v.first][v.second]=level+1;
             if(!isf)dfs(v.first,v.second,level+1);
             arr[v.first][v.second]=0;
        }
    }

}
void solve()
{
    int x,y;cin>>x>>y;
    swap(x,y);
    arr[x][y]=1;
    dfs(x,y,1);

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