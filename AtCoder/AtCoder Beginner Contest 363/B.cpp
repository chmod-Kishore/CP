#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,t,p,x;
    cin >> n >> t >> p;
    int dp[100];
    for(int i=0;i<n;++i){
    	cin >>x;
    	dp[i]=max(0,t-x);
	}
	sort(dp,dp+n);
	cout << dp[p-1]<<"\n"; 
    return 0;
}

