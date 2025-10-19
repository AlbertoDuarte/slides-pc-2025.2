vector<int> vals = v;
sort(vals.begin(), vals.end()); // ordena
vals.erase(unique(vals.begin(), vals.end()), valores.end());

map<int,int> traducao;
for(int i = 0; i < (int)vals.size(); i++)
    traducao[v[i]] = i; // agora todo valor esta entre 0 e n-1

for(int i = 0; i < n; i++) {
    v[i] = traducao[v[i]];
}