ST seg(); // segtree que calcula maximo e atualiza v[i] = val
vector<int> dp(n, 0);
for(int i = n-1; i >= 0; i--) {
    dp[i] = 1;
    dp[i] = max(dp[i], seg.query(v[i]+1, n));
    int valor_antigo = seg.query(v[i], v[i]);
    if(dp[i] > valor_antigo) seg.update(v[i], dp[i]);
}
