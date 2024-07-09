#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define ll long long

ll bin_pow(ll a, ll b){
    //calculate a^b
    if(b==0){
        return 1;
    }
    int res  = bin_pow(a,b/2);
    if(b%2){
        return res*res*a; //for even
    }
    else
        return res*res // for odd numbers

}

ll binpow(ll a, ll b){
    ll res = 1;
    while(b>0){
        if(b&1){
            res*=a;
        }
        a*=a;
        b>>=1;
    }
    return res;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
    #endif
    int a,n; cin >> a >> n;
    cout << bin_pow(a,n);
    return 0;
}
 
