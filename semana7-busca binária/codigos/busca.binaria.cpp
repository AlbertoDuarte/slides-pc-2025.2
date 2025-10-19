int l = 0, r = n-1, resposta;
while(l <= r) {
    int mid = (l+r)/2;

    if(v[mid] < X) {
        l = mid+1;
    }
    else if(v[mid] > X) {
        r = mid-1;
    }
    else {
        resposta = mid;
        break;
    }
}