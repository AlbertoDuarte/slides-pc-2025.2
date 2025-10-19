vector<int> parent(n+1), sz(n+1, 1);
for(int i = 0; i < n+1; i++) parent[i] = i;

int find(int u) {
    if(u == parent[u]) return u;
    return parent[u] = find(parent[u]);
}

void join(int a, int b) {
    a = find(a); b = find(b);
    if(a == b) return;
    if(sz[a] < sz[b]) swap(a, b);
    parent[b] = a;
    sz[a] += sz[b];
}