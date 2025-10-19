// i representa o indice do elemento do vetor a ser atualizado
// val representa o novo valor do elemento
// x representa o INDICE do no atual
// [lx, rx] representa o intervalo do no de indice x
void update(int i, int val, int x, int lx, int rx) {
    if(lx == rx) {
        t[x] = val;
        return;
    }
    int mid = (lx+rx)/2;
    // chama recursivo para atualizar os filhos
    if(i <= mid) update(i, val, 2*x, lx, mid);
    else update(i, val, 2*x+1, mid+1, rx);

    // com os filhos atualizados, atualizamos o no atual
    t[x] = t[2*x] + t[2*x+1];
}