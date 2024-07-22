#include <bits/stdc++.h>
using namespace std;
#define kishore 7 
#define mod 1000000007
#define ll long long
#define mp make_pair;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
    #endif
    int n;
    cin >> n;
    if(n>=1 && n<=99){
        cout << 100-n << endl;
    }
    else if(n>=100 && n<=199){
        cout << 200-n << endl;
    }
    else if(n>=200 && n<=299){
        cout << 300-n << endl;
    }
    else{
        cout << 0 << endl;
    }
    return 0;

}
