# include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ld = long double;

#define FOR(L, N) for (ll i = L; i < (N - 2); ++i)

ll fib(ll n) {
    return (pow((1+sqrt(5))/2, n) - pow((1 - sqrt(5))/2,n))/sqrt(5);
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<ll, bool> ret_val;

    FOR(1,50)
        ret_val[fib(2ll*i) * fib(2ll*i + 1ll)] = true;

    int t;

    cin >> t;

    while(t--)
    {
        ll val;
        cin >> val;
        cout << (ret_val[val] ? 1 : 0) << "\n";
    }
    
    return 0;
}