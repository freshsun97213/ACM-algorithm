void func(long long l , long long r) {
    if(l > r) return;
    if(IsAutomorphic(l)) {
        printf("%lld\n" , l);
        ok = 1;
    }
    func(l + 1 , r);
}

void FindAutomorphic(long long l, long long r) {
    ok = 0;
    func(l , r);
    if(!ok) puts("None");
}



