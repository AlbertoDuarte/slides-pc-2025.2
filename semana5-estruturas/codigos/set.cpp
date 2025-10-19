    set<int> s;
    s.insert(1);
    s.insert(3);

    auto it1 = s.find(1);
    cout << *it1 << endl; // imprime 1
    auto it2 = s.find(2);
    // acessar *it2 gera erro, pois it2 == s.end()

    auto it3 = s.lower_bound(1);
    cout << *it3 << endl; // imprime 1

    auto it4 = s.lower_bound(2);
    cout << *it4 << endl; // imprime 3