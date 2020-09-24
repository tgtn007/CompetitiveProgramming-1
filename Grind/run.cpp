/******************************************
* AUTHOR : ARPIT *
* NICK : arpitfalcon *
* INSTITUTION : BIT MESRA *
* Ab m game m hu. *
******************************************/

#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007 -
#define vll vector<ll>
#define vvll vector<vll>
#define pll pair<ll, ll>
#define vpll vector<pll>
#define vin                    \
    ll n;                      \
    cin >> n;                  \
    vector<ll> x(n);           \
    for (ll i = 0; i < n; i++) \
    cin >> x[i]
#define vout                   \
    for (ll i = 0; i < n; i++) \
    cout << x[i] << " "
#define T     \
    ll t = 1; \
    cin >> t; \
    while (t--)
#define ain                    \
    ll n, k;                   \
    cin >> n >> k;             \
    ll a[n];                   \
    for (ll z = 0; z < n; z++) \
    cin >> a[z]
#define aout                   \
    for (ll i = 0; i < n; i++) \
    cout << a[i] << " "
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define endl "\n"
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define max4(a, b, c, d) max(a, max3(b, c, d))
#define min4(a, b, c, d) min(a, min3(b, c, d))
#define blink                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const double PI = 3.141592653589793238463;

#define forn(i, n) for (ll(i) = 0; (i) < (n); ++(i))
#define for1(i, n) for (ll(i) = 1; (i) <= (n); ++(i))
#define forr(i, n) for (ll(i) = (n)-1; (i) >= 0; --(i))
#define forab(i, a, b, c) for (ll(i) = a; (i) <= (b); (i) += (c))

/*
__builtin_ffs(x)
  Number of set bits: __builtin_popcount(x)
  Number of leading zeroes: __builtin_clz(x)
  Number of trailing zeroes : __builtin_ctz(x)
*/

long long int nC2(long long int max_count)
{
    return (max_count * (max_count - 1)) / 2;
}

int main()
{
    blink
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // your code goes here
    long long int n, m;
    cin >> n >> m;

    // Max Calculate
    long long int max_count = n - m + 1;
    long long int maxx = nC2(max_count);

    // Min calculate
    long long int min_count = n / m;
    long long int min_count_add = n % m;

    long long int minn = 0;
    for (long long int i = 0; i < min_count_add; i++)
    {
        minn += nC2(min_count + 1);
    }
    for (long long int i = 0; i < (m - min_count_add); i++)
    {
        minn += nC2(min_count);
    }

    cout << minn << " " << maxx << endl;
    return 0;
}