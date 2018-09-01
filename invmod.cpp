pair<ll,ll> extgcd(ll a,ll b) {
    if(b == 0) return make_pair(1,0);
    ll c = a % b;
    ll s = a / b;
    auto g = extgcd(b,c);
    return make_pair(g.second,g.first - s * g.second);
}

ll invmod(ll mod,ll n) {
    auto g = extgcd(mod,n);
    return g.second;
}
