#include <bits/stdc++.h>
using namespace std;
#define f(i,a,b) for(int i=a;i<b;i++)
//{}  []
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n; cin >>n;
    vector <int> v;
    f(i,0,n){
        int a;cin>>a;
        v.push_back(a);
    }
    int plo=0,ple=0;
    int co,ce;
    
    f(i,0,n){
        if(v[i]%2==0){
            ple=i+1;
            ce++;
        }else{
            plo=i+1;
            co++;            
        }
    }
    
    if(ce==1){
        cout<<ple<<endl;
    }else{
        cout<<plo<<endl;
    }
    
    return 0;
}