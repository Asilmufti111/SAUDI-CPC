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

bool isPrime(int n){
    if(n <= 1)
        return false;
    for(int i = 2; i < n; ++i)
        if(n % i == 0)
            return false;
    return true;
}

bool isPrime2(int n){
    if(n <= 1)
        return false;
    int end = sqrt(n);
    for(int i = 2; i * i <= n; ++i){
        if(n % i == 0)
            return false;
    }
    return true;
}

void solve(){

}

int main(){

    solve();
}