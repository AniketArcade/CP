#include<bits/stdc++.h>
using namespace std;
int main(){

int t;cin>>t;
while(t--){
    long long x;cin>>x;
    
    long long mx=LLONG_MAX;
    for(int i=1;i<61;i++){
        long long p=(1LL<<i);
        mx=min(mx,abs(x-p));
    }
    for(int i=0;i<61;i++){
        for(int j=i+1;j<61;j++){
            long long p=(1LL<<i)+(1LL<<j);
            mx=min(mx,abs(p-x));
        }
    } cout<<mx<<endl;
}

    
    return 0;
}