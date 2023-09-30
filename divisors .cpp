//get number divisors//
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


vector<long long> getDivisors(long long x){
     
    vector<long long> diviors;
    for(int i = 1; i <= x / i; ++i){
        if(x % i == 0){
            diviors.push_back(i);
            if(i != x / i)
                diviors.push_back(x / i);
        }
    }
    return diviors;
}



void solve(){
}

int main(){
    ios_base::sync_with_stdio( 0 );
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}