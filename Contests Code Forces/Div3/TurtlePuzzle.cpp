#include <bits/stdc++.h>
using namespace std;
#define f(i,a,b) for(int i=a;i<b;i++)
//{}  []
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t ; cin>>t;
    
    f(i,0,t){
        int sum=0;
        int n ; cin>>n;
        f(j,0,n){
            int a; cin>>a;
            if(a<0){
                sum+= -(a);
            }else{
                sum+=a;
            }
        }
        cout<<"----"<<sum<<endl;
    }

    return 0;
}