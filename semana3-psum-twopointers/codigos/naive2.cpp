for(int l = 0; l < n; l++) {
    for(int r = l; r < n; r++) {
        soma += v[r];
        if(soma == x) resposta++;
    }
}