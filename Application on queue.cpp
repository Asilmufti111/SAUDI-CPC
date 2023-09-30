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

void solve(){
    queue<int> q;
    q.push(0);
    int cnt = 0;
    int n;
    cin >> n;
    while (q.front() < n){
        int curr = q.front();
        q.pop();
        q.push(curr * 10 + 4);
        q.push(curr * 10 + 7);
        if(curr < n)
            ++cnt;
    }
    cout << cnt - 1 << endl;

}

int main(){
    solve();
}