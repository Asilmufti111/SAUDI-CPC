// problem on binary search: //

/*  Given a number N
Print the maximum number of distinct numbers that 
their summation is less than or equal to N

// Input
Only one line contains a number N(1≤N≤1018)

// Output
Print the required answer above.

//Note:
-- In the first example (input=15, output=5):
1+2+3+4+5 equal 15 which is ≤N
-- In the second example (input=8, output=3):
1+2+3 equal 6 which is ≤N
*/


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

bool can(long long x, long long n){
    return (x * (x + 1)) / 2 <= n;
}

void solve(){
    long long n;
    cin >> n;
    long long l = 1, h = sqrt(2 * n);
    long long ans = 0;
    while(l <= h){
        long long mid = (l + h) / 2;
        if(can(mid, n)){
            ans = mid;
            l = mid + 1;
        }else{
            h = mid - 1;
        }
    }
    cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio( 0 );
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}