//Z FUNCTION
//o vector chega vazio.
void zf(string &s, vector<int> &z) {
    int L = 0, R = 0, n = s.length();
    z.resize(n);
    z[0] = n;
    for(int i = 1; i < n; ++i) {
        if(R < i) {
            for(L = R = i; R < n && s[R] == s[R - L]; ++R);
            z[i] = R - L;
            --R;
        }
        else if(z[i - L] <= R - i)
            z[i] = z[i - L];
        else {
            for(L = i, ++R; R < n && s[R] == s[R - L]; ++R);
            z[i] = R - L;
            --R;
        }
    }
}
