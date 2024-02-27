#include <bits/stdc++.h>
using namespace std;
#define f(i,a,b) for (int i =a; i<b; i++)
#define a.all() a.begin(),a.end()

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t; cin>>t;
    f(i,0,t){
        int n, k; cin>>n>>k;
        vector <int> vectorA;
        vector <int> vectorB;
        f(i,0,n){
            int A; cin>>A;
            vectorA.push_back(A);
        }
        f(i,0,n){
            int B; cin>>B;
            vectorB.push_back(B);
        }
        int ans;
        ans+=vectorA[0];
        f(i,0,k){
            if(i==n-1){
                ans+=vectorB[i];
            }else{
                ans+=max(vectorB[i], vectorA[i+1]);
            }
        }
        cout<<ans<<endl;

    }

    return 0 ;
}