int solve(int i, int soma) {
    if(i >= n) {
        if(soma <= X) return soma;
        return 0;
    }
    return max(solve(i+1, soma), solve(i+1, soma+v[i]));
}