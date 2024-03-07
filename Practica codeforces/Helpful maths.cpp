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

    string t ; cin>>t;
    vi vec = {};
    
    for(char c:t){
        if (c!='+'){
            vec.pb(c);
        }
    }
    cout<<endl;
    sort(vec.begin(), vec.end());
    int cont=0;
    for(char c:vec){
        if(cont==0){
            cout<<c;
        }else{
            cout<<"+"<<c;
        }
        cont++;
    }

    return 0;
}