// Count how many divisors from prime factorisation: //
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdio>
#include <numeric>
#include <cstring>
#include <ctime>
#include <cstdlib>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <list>
#include <cmath>
#include <bitset>
#include <cassert>
#include <queue>
#include <deque>
#include <cassert>
#include <iomanip>
#include <chrono>
#include <stack>
using namespace std;



const int N = 1e6 + 5;
int m = 1e9 + 7;

void solve(){
    int n;
    cin >> n;
    map<int, int> mp;
    for(int i = 0; i < n; ++i){
        int x, p;
        cin >> x >> p;
        mp[x] = p;
    }
    int ans = 1;
    for(auto e: mp){
        ans = (ans % m * (e.second + 1) % m) % m;
    }
    cout << ans << endl;
}
int main(){
    ios_base::sync_with_stdio( 0 );
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    while (t--)
        solve();
    return 0;
}