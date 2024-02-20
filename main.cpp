#include <bits/stdc++.h>

using namespace std;

// data types
#define int long long
#define double long double

// define functions
#define f(i,s,e) for(int i=s;i<e;i++)
#define cf(i,s,e) for(int i=s;i<=e;i++)
#define rf(i,e,s) for(int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back
#define all(a) (a).begin(), (a).end()

/* PRINTS */
template <class T>
void print_v(vector<T> &v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; }

// Functions
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }
bool prime(int a) { if (a==1) return 0; for(int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }

//constants
const int MOD = 1e9 + 7;

int t[102][102];

int knapsack(int wt[], int val[], int w, int n) {
    if (n==0||w==0) return 0;
    if (t[w][n]>-1)
        return t[w][n];
    if (wt[n-1]<=w)
        t[w][n] = max(val[n-1]+ knapsack(wt, val, w-wt[n-1], n-1), knapsack(wt,val,w,n-1));
    else
        t[w][n] = knapsack(wt,val,w,n-1);
    return t[w][n];
}

void solve() {
    int wt[] = {1,2,3,4,5};
    int val[] = {10,4,5,6,8};
    int w = 3;
    int n = 5;
    memset(t, -1, sizeof(t));
    cout << knapsack(wt, val, w, n) << endl;
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
