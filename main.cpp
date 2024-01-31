#include <bits/stdc++.h>

using namespace std;

// data types
#define int long long
#define double long double

// define functions
#define f(i,s,e) for(int i=s;i<e;i++)
#define cf(i,s,e) for(long long i=s;i<=e;i++)
#define rf(i,e,s) for(long long i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back
#define all(a) (a).begin(), (a).end()

/* PRINTS */
template <class T>
void print_v(vector<T> &v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; }

// Functions
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }
bool prime(int a) { if (a==1) return false; for(int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return true; }

//constants
const int MOD = 1e9 + 7;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        
    }
}

signed main() {
//  =============================================================================
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
//  =============================================================================
    solve();
    return 0;
}
