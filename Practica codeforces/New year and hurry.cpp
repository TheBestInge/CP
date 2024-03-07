#include <bits/stdc++.h>
using namespace std;

#define f(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define pb push_back

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

    int n , k ; cin>>n>>k;
    int contest=240-k;
    int ans=0;
    f(i,1,n+1){
        if(contest>=5*i){
            contest-=5*i;
            ans++;
        }    
    }
    cout<<ans<<endl;
    return 0;
}