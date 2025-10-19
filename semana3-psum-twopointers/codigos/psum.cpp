psum[0] = 0;
for(int i = 1; i < n; i++) psum[i] = v[i] + psum[i-1];

for(int i = 0; i < q; i++) {
    int res = psum[r];
    if(l-1  >= 0) res -= psum[l-1];
    cout << res << endl;
}