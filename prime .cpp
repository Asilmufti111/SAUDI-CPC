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



////////////////// another way for finding if the number is prime or not ////////////////////

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
        int n;
        cin>>n;
        int p=1; // is prime?
        if (n==2){
             cout<<"Prime"<<endl;

        }else if (n==1){ 
            cout<<"Not prime"<<endl; // becouse prime # should be >1;
        }
        else {
            for (int i=2;i<=n/2;++i){ // = is important in the condition.
            if (n%i==0){
                p=0;
                break; //important for TLE!!
            }
        }
        if (p){
            cout<<"Prime"<<endl;
        }else cout<<"Not prime"<<endl;
        }
    
    return 0;
}
