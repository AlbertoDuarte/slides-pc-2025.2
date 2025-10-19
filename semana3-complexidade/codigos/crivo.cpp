for(int i = 2; i <= n; i++) {
    for(int j = i+i; j <= n; j+=i) {
        primo[j] = 0;
    }
}