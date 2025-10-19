#include <bits/stdc++.h>
using namespace std;

#define ll long long

// diz se p eh subsequencia de s
bool subsequencia(string s, string p) {
    int idxs = 0, idxp = 0;

    while(idxs < (int)s.size() and idxp < (int)p.size()) {
        if(s[idxs] == p[idxp]) {
            idxs++;
            idxp++;
        }
        else {
            idxs++;
        }
     }

    // if(idxp == (int)p.size()) return 1;
    // return 0;
    return idxp == (int)p.size();
}

int P(string& s, string& p, vector<int>&apagar, int mid) {
    string s2; // a string depois de apagar mid caras
    vector<bool> eliminado(s.size()+1);

    for(int i = 0; i < mid; i++) {
        eliminado[apagar[i]] = 1;
    }

    for(int i = 0; i < (int)s.size(); i++) {
        if(eliminado[i] == 0) s2.push_back(s[i]);
    }

    return subsequencia(s2, p);
}

int main() {
    string s, p;
    cin >> s >> p;

    vector<int> apagar(s.size());
    for(int i = 0; i < (int)s.size(); i++) {
        cin >> apagar[i];
        apagar[i]--;
    }

    int l = p.size(), r = s.size(), res = -1;
    while(l <= r) {
        ll mid = (l+r)/2;

        if(P(s, p, apagar, mid)) {
            l = mid+1;
            res = mid;
            // cout << "! mid = " << mid << endl;
        }
        else {
            // cout << "& mid = " << mid << endl;
            r = mid-1;
        }
    }

    cout << res << endl;

    return 0;
}