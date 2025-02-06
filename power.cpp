int power(Long Long n, Long Long k) {
    int ans = 1 % mod; 
    n %= mod; 
    if (n < 0) 
        n += mod;
    while (k) {
        if (k & 1) 
            ans = (Long Long) ans * n % mod;
        n = (Long Long) n * n % mod;
        k >>= 1;
    }
    return ans;
}
