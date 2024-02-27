#include <bits/stdc++.h>
using namespace std;
#define f(i,a,b) for(int i=a;i<b;i++)
//{}  []
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a,b,c; cin>>a>>b>>c;
    int ans= max((a*b*c),((a+b)*c));
    int ans2=max((a*(b+c)), (a+b+c) );
    int ansr=max(ans, ans2);
    cout<<ansr<<endl;
    return 0;
}