#include <bits/stdc++.h>
using namespace std;

#define ll long long

// retorna 1 se eh possivel dividir
// em k pedacos com maior soma
// <= mid
// e retorna 0 caso contrario
int P(vector<ll>& v, ll k, ll mid) {
    ll soma = 0, divisoes = 1;
    for(int i = 0; i < (int)v.size(); i++) {
        if(soma + v[i] > mid) {
            soma = v[i];
            divisoes++;
        }
        else if(v[i] > mid) {
            return 0;
        }
        else {
            soma += v[i];
        }
    }

    // if(divisoes > k) return 0;
    // return 1;
    return (divisoes <= k);
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<ll> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    ll l = 1, r = 200000000000000, res = -1;
    while(l <= r) {
        ll mid = (l+r)/2;

        if(P(v, k, mid)) {
            r = mid-1;
            res = mid;
            // cout << "! mid = " << mid << endl;
        }
        else {
            // cout << "& mid = " << mid << endl;
            l = mid+1;
        }
    }

    cout << res << endl;

    return 0;
}