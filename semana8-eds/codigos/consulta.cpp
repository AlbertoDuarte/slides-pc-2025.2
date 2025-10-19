const int MAX = 4*N; // N eh o maior tamanho possivel do vetor
int t[MAX]; // armazena os valores em cada no


// [l, r] representa o intervalo que queremos calcular
// x representa o INDICE do no atual
// [lx, rx] representa o intervalo do no de indice x
int query(int l, int r, int x, int lx, int rx) {
    if(l <= lx and rx <= r) return t[x];
    if(r < lx or rx < l) return 0;

    int mid = (lx+rx)/2;
    int s1 = query(l, r, 2*x, lx, mid); // esquerda -> 2*x
    int s2 = query(l, r, 2*x+1, mid+1, rx); // direita 2*x+1

    return s1 + s2;
}