int fexp(int b, int e) {
    if(e == 0) return 1;
    int answer = fexp(b, e/2);
    answer = (answer * answer);
    if(e%2 == 1) answer = answer * b;
    return answer;
}