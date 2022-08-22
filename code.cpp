#include<bits/stdc++.h>
using namespace std;
string s;
int dp[2005][2005];

void trace(int l, int r) {
    if(l==r ) {cout << s[l]; return;}
    if(s[l]==s[r]) {
        cout << s[l];
        trace(l+1,r-1);
        cout << s[r];
        return;
    }
    if(dp[l][r] == dp[l+1][r]) trace(l+1,r);
    else trace(l,r-1);
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
//    freopen("C:\\study\\tin\\code\\b1\\input.inp","r",stdin);
//    freopen("C:\\study\\tin\\code\\b1\\output.out","w",stdout);
    cin >> s;
    int n = size(s);

    // dp
    for(int len = 1; len <= n; len++)
        for(int l = 0; l < n - len + 1; l++) {
            int r = l + len - 1;
            // khoi tao gia tri dau
            if (len == 1) { dp[l][r] = 1; continue; }
            if (len == 2) { dp[l][r] = 1 + (s[l] == s[r]); continue; }

            dp[l][r] = max(dp[l+1][r], dp[l][r-1]);
            if (s[l] == s[r]) {

                dp[l][r] = max(dp[l][r], 2 + dp[l+1][r-1]);};
        }

    // truy vet

    trace(0, n-1);

    return 0;
}
