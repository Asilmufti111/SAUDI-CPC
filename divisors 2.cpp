// divisors using seive//
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

vector<long long> getPrimeDivisors(long long x){
    vector<long long> primes;
    for(int i = 2; i <= x / i; ++i){
        while(x % i == 0){
            primes.push_back(i);
            x = x / i;
        }
    }
    if(x != 1)
        primes.push_back(x);
    return primes;
}

bool isPrime(long long x){
    for(int i = 2; i <= x / i; ++i){
        if(x % i == 0)
            return false;
    }
    return x > 1;
}



const int N = 1e6 + 5;
int divisors[N];
void seive(){
    for(int i = 1; i < N; ++i){
        for(long long j = i; j < N; j += i)
            ++divisors[j];
    }
}
void solve(){
    seive();
    int n;
    cin >> n;
    for(int i = 2; i <= n; ++i){
        int x;
        cin >> x;
        cout << divisors[x] << endl;
    }
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