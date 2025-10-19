int dp(int i) {
    if(i >= n) return 0; // caso base
    if(!memoizado[i] != -1) return tab[i];
    memoizado[i] = 1;
    return tab[i] = max(dp(i+2), v[i] + dp(i+1));
}