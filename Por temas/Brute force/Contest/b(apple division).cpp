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
/*
int func(int n, vi vec){
    int algo=0;
    for(int i:vec){
        if(i<=n){
            algo=max(i,max);
        }
    }
    if(algo=0)return;
    else func(n-algo);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin>>n;
    vi vec;
    int sum=0;
    f(i,0,n){
        int m; cin>>m;
        vec.pb(m);
        sum+=m;
    }
    sum=sum/2;
    sort(vec.begin() , vec.end());

    func(sum,vec);


    return 0;
}*/

void func(int i, int s){
    
}


//SOLUCION SEGUND DANIEL Y OSCAR

vi a(n);
vector<bool> b(n);

int func(int i){
    if(i==n){
        int mn= pow(10,8) , s1=0 , s2=0;
        f(j,0,n){
            if(b[j]) s2+=a[j];
            else s1+=a[j];
        }
        mn=min(mn,abs(s1-s2));
    }
    b[i]=1;
    func(i+1);
    b[i]=0;
    func(i+1);
}

int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);


    int n; cin>>n;
    f(i,0,n){
        cin>>a[i];
        b[i]=0;
    }

    return 0;
}