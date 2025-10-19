vector<int> dp(n, 0);
for(int i = n-1; i >= 0; i--) {
    dp[i] = 1;
    for(int j = n-1; j > i; j--) {
        if(v[i] < v[j]) {
            dp[i] = max(dp[i], dp[j]+1);
        }
    }
}