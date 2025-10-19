for(int query = 0; query < q; query++) {
    int l, r;
    cin >> l >> r;
    for(int i = l; i <= r; i++) {
        soma += v[i];
    }
    cout << soma << endl;
}