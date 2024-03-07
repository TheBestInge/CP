#include <bits/stdc++.h>
using namespace std;

#define f(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define pb push_back

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

//{}  []
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin>>n;
    vi x;
    vi y;
    f(i,0,n){
        int m; cin>>m;
        x.pb(m);
    }
    f(i,0,n){
        int m; cin>>m;
        y.pb(m);
    }
    int mx=0;
    f(i,0,n){
        f(j,i+1,n){
            mx=max(mx, (x[i]-x[j]) * (y[i]-y[j]));
        }
    }
    return 0;
}