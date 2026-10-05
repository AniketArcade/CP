#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;
        cin>>s;
        bool ok1=false,ok2=false;
        for(int i=0;i<n-3;i++){
            string p = s.substr(i,4);
            
            if(p == "2025"){
                ok1 = true;
            }
            else if(p == "2026"){
                ok2 = true;
            }
        }
        if(ok2){
            cout << 0 << endl;
        }
        else if(!ok1){
            cout << 0 << endl;
        }
        else{
            cout << 1 << endl;
        }
    }
}