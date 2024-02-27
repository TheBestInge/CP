#include <bits/stdc++.h>
using namespace std;
#define f(i,a,b) for(int i=a;i<b;i++)
//{}  []
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s,ans; cin>>s;
    int contc=0,contu=0,contador=0;
    for(char c:s){
        if(c=='0'){
            contc++;
            contu=0;
        }else if(c=='1'){
            contu++;
            contc=0;
        }
        if(contu>=7 or contc>=7){
            ans="YES";
            break;
        }else{
            ans="NO";
        }
        contador++;
    }
    cout<<ans<<endl;
    
    return 0;
}