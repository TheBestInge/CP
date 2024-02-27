#include <bits/stdc++.h>
using namespace std;
#define f(i,a,b) for(int i=a;i<b;i++)
//{}  []
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string a,b; cin>>a>>b;
    int tamaño= a.length();
    int suma=0,sumb=0;
    for(int i= 0; i<tamaño;i++){
        if(65<=a[i] && a[i]<=90){
            suma+=a[i]+32;
        }else{
            suma+=a[i];
        }
    }
    for(int i= 0; i<tamaño;i++){
        if(65<=b[i] && b[i]<=90){
            sumb+=b[i]+32;
        }else{
            sumb+=b[i];
        }
    }
    if(suma<sumb){
        cout<<-1<<endl;
    }else if(suma>sumb){
        cout<<1<<endl;
    }else{
        cout<<0<<endl;
    }
    
    return 0;
}