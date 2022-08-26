/*
████████████████████████████████████████████████████████████████████████████████████
██████████████████████████████████████████████████████████████████████████████████████
███████████████████████████▓▓▓▓▓▓▓▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓▓▓╬╬╬╬╬╬▓███████████████████████
███████████████████████████▓███████▓▓╬╬╬╬╬╬╬╬╬╬╬╬▓███▓▓▓▓█▓╬╬╬▓███████████████████████
███████████████████████████████▓█████▓▓╬╬╬╬╬╬╬╬▓███▓╬╬╬╬╬╬╬▓╬╬▓███████████████████████
████████████████████████████▓▓▓▓╬╬▓█████╬╬╬╬╬╬███▓╬╬╬╬╬╬╬╬╬╬╬╬╬███████████████████████
███████████████████████████▓▓▓▓╬╬╬╬╬╬▓██╬╬╬╬╬╬▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓███████████████████████
████████████████████████████▓▓▓╬╬╬╬╬╬╬▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓███████████████████████
███████████████████████████▓█▓███████▓▓███▓╬╬╬╬╬╬▓███████▓╬╬╬╬▓███████████████████████
████████████████████████████████████████▓█▓╬╬╬╬╬▓▓▓▓▓▓▓▓╬╬╬╬╬╬╬███████████████████████
███████████████████████████▓▓▓▓▓▓▓╬╬▓▓▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓███████████████████████
████████████████████████████▓▓▓╬╬╬╬▓▓▓▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓███████████████████████
███████████████████████████▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓███████████████████████
█████████████████████████████▓▓▓▓▓▓▓▓█▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓███████████████████████
█████████████████████████████▓▓▓▓▓▓▓██▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬████████████████████████
█████████████████████████████▓▓▓▓▓████▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬████████████████████████
████████████████████████████▓█▓▓▓▓██▓▓▓▓██╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬████████████████████████
████████████████████████████▓▓███▓▓▓▓▓▓▓██▓╬╬╬╬╬╬╬╬╬╬╬╬█▓╬▓╬╬▓████████████████████████
█████████████████████████████▓███▓▓▓▓▓▓▓▓████▓▓╬╬╬╬╬╬╬█▓╬╬╬╬╬▓████████████████████████
█████████████████████████████▓▓█▓███▓▓▓████╬▓█▓▓╬╬╬▓▓█▓╬╬╬╬╬╬█████████████████████████
██████████████████████████████▓██▓███████▓╬╬╬▓▓╬▓▓██▓╬╬╬╬╬╬╬▓█████████████████████████
███████████████████████████████▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓╬╬╬╬╬╬╬╬╬╬╬██████████████████████████
███████████████████████████████▓▓██▓▓▓▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓██████████████████████████
████████████████████████████████▓▓▓█████▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓███████████████████████████
█████████████████████████████████▓▓▓█▓▓▓▓▓███▓╬╬╬╬╬╬╬╬╬╬╬▓████████████████████████████
██████████████████████████████████▓▓▓█▓▓▓╬▓██╬╬╬╬╬╬╬╬╬╬╬▓█████████████████████████████
███████████████████████████████████▓▓█▓▓▓▓███▓╬╬╬╬╬╬╬╬╬▓██████████████████████████████
██████████████████████████████████████▓▓▓███▓▓╬╬╬╬╬╬╬╬████████████████████████████████
███████████████████████████████████████▓▓▓██▓▓╬╬╬╬╬╬▓█████████████████████████████████
██████████████████████████████████████████████████████████████████████████████████████
*/
#include <algorithm>
#include <bitset>
#include <iterator>
#include <numeric>
#include <string>
#ifndef LOCAL
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#endif
#include <bits/stdc++.h>

    using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> p32;
typedef pair<ll, ll> p64;
typedef pair<p64, p64> pp64;
typedef pair<double, double> pdd;
typedef vector<ll> v64;
#define bs binary_search
#define BIG LLONG_MAX
typedef vector<int> v32;
typedef vector<vector<int>> vv32;
typedef vector<vector<ll>> vv64;
typedef vector<vector<p64>> vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
typedef pair<ll, p64> tp;
ll MOD = 1e9 + 7;
#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define ln '\n'
#define sp << " " <<
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define zero ll(0)
#define set_bits(x) __builtin_popcountll(x)
#define ar array
#define ll long long
#define es erase
#define ld long double
#define sza(x) ((int)x.size())
#define MEM(a, b) memset(a, (b), sizeof(a))
#define RFOR(i, j, k, in) for (int i = j; i >= k; i -= in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define IN(A, B, C) assert(B <= A && A <= C)
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define read(type) readInt<type>()
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int, int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;
#define sz(x) int((x).size())
#define bg(x) begin(x)
#define all(x) bg(x), end(x)
#define rall(x) x.rbegin(), x.rend()
#define sor(x) sort(all(x))
#define rsz mandize
#define ins insert
#define pb push_back
#define eb emplace_back
#define fd find
#define ft front()
#define bk back()
#define lb lower_bound
#define ub upper_bound

// loops
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define F0R(i, a) FOR(i, 0, a)
#define ROF(i, a, b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i, a) ROF(i, 0, a)
#define rep(a) F0R(_, a)
#define each(a, x) for (auto &a : x)

#define printe(item) cout << item << " "; // cout without endl
#define print3(item, y, z) cout << item << " " << y << " " << z << endl;
#define print4(item, y, z, zz)                                                 \
  cout << item << " " << y << " " << z << " " << zz << endl;
#define println() cout << ln;
const int N = 1e5 + 10;
template <typename T> void print(const T &t) { std::cout << t; }

template <class T> void print(vector<T> v) {
  for (T i : v) {
    printe(i);
  }
  println();
}
template <class T> void print(set<T> v) {
  for (T i : v) {
    printe(i);
  }
  println();
}

template <class T, class V> void print(map<T, V> v) {
  for (auto i : v) {
    printe(i)
  }
  println();
}

typedef unsigned long long ull;
typedef long double lld;

void print(ll t) { cout << t << ln; }
void print(int t) { cout << t << ln; }
void print(string t) { cout << t << ln; }
void print(char t) { cout << t << ln; }

void print(ll a, ll b) { cout << a << " " << b << ln; }
void print(int a, int b) { cout << a << " " << b << ln; }
void print(string a, string b) { cout << a << " " << b << ln; }
void print(char a, char b) { cout << a << " " << b << ln; }
void print(string a, ll b) { cout << a << " " << b << ln; }
void print(ll a, string b) { cout << a << " " << b << ln; }

void print(ll a, ll b, ll c) { cout << a << " " << b << " " << c << ln; }
void print(int a, int b, int c) { cout << a << " " << b << " " << c << ln; }
void print(string a, string b, string c) {
  cout << a << " " << b << " " << c << ln;
}
void print(char a, char b, char c) { cout << a << " " << b << " " << c << ln; }
void print(ll a, string b, ll c) { cout << a << " " << b << " " << c << ln; }
void print(ll a, string b, string c) {
  cout << a << " " << b << " " << c << ln;
}
void print(string a, ll b, ll c) { cout << a << " " << b << " " << c << ln; }
void print(string a, ll b, string c) {
  cout << a << " " << b << " " << c << ln;
}
void print(string a, string b, ll c) {
  cout << a << " " << b << " " << c << ln;
}

#ifndef fan_of_tourist
#define debug(x)                                                               \
  cerr << #x << " ";                                                           \
  _print(x);                                                                   \
  cerr << ln;
#else
#define debug(x)
#endif

void _print(ll t) { cerr << t; }
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }

template <class T, class V> void _print(pair<T, V> p);
template <class T> void _print(vector<T> v);
template <class T> void _print(set<T> v);
template <class T, class V> void _print(map<T, V> v);
template <class T> void _print(multiset<T> v);
template <class T, class V> void _print(pair<T, V> p) {
  cerr << "{";
  _print(p.fi);
  cerr << ",";
  _print(p.se);
  cerr << "}";
}
template <class T> void _print(vector<T> v) {
  cerr << "[ ";
  for (T i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T> void _print(set<T> v) {
  cerr << "[ ";
  for (T i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T> void _print(multiset<T> v) {
  cerr << "[ ";
  for (T i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T, class V> void _print(map<T, V> v) {
  cerr << "[ ";
  for (auto i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}


void yes() { cout << "YES\n"; }

void no() { cout << "NO\n"; }

bool sortcol(const vector<ll> &v1, const vector<ll> &v2) {
  return v1[2] < v2[2];
}

void solve(){
  string s = "is2 sentence4 This1 a3";
  vector<pair<char,string>>v;
  string temp;
  vector<string>ve;
  forn(i,s.size())
  {
    if(s[i]!=' ')
    {
      temp+=s[i];
    }
    else
    {
      ve.pb(temp);
      temp=" ";
    }
  }
  ve.pb(temp);
  for(auto i:ve)
  {
    int si=i.size();
    string str=i.substr(0,si-1);
    char k=i[si-1];
    // cout<<i[si-1]<<" ";
    // cout<<str<<" ";
    v.pb({k,str});
  }
  sort(all(v));
  string s1;
  // debug(v)
  for(auto i:v)
  {
    s1+=i.second;
    s1+=" ";
  }
  for (int i = s1.size() - 1; i >= 0; i--) {
    if (s1[i] == ' ' && s1[i] == s1[i - 1]) 
    {
      s1.erase(s1.begin() + i);
    }
  }
  cout<<s1;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  // ll T;
  ll T = 1;
  // cin >> T;
  while (T--) {
    solve();
  }
}
/*   xy (mod a) ≡ ((x (mod a) * 10) + (y (mod a))) mod a   */
/* greedy brute force dp binary search constructive pegion hole */
/*
// a|b = a^b + a&b      a^(a&b) = (a|b)^b       b^(a&b) = (a|b)^a (a&b)^(a|b)
= a^b
// a+b = a|b + a&b      a+b = a^b + 2(a&b)
// a-b = (a^(a&b))-((a|b)^a)    a-b = ((a|b)^b)-((a|b)^a)   a-b =
(a^(a&b))-(b^(a&b))   a-b = ((a|b)^b)-(b^(a&b))
*/
