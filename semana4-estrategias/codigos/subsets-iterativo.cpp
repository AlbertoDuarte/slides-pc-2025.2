for(int b = 0; b < (1 << n); b++) { // (1 << n) = 2^n
    int soma = 0;
    for(int i = 0; i < n; i++) {
        if( (1 << i) & b > 0 ) { // verificando se o i-esimo bit de
            soma += v[i];        // b está ligado
        }
    } if(soma <= x) resposta = max(resposta, soma);
}