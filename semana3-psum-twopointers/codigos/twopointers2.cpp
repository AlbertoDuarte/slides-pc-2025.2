int r = -1, l = 0, soma = 0, resposta = 0;
while(r+1 < n) {
    r++;
    soma += v[r];
    while(soma >= x) {
        if(soma == x) resposta++;
        soma -= v[l]; l++;
    }
}