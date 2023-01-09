#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
using namespace std;

int main(){
    return 1;
}

int gcd(int a, int b){
    if(a==b) return a;
    return gcd(b, a%b);
}

vector<int> sieve(int n){
    vector<int> sieve (n + 1);
    for(int x = 2; x <= n; x++){
        if (sieve[x]) continue;
        for(int u = 2 * x; u <=n; u+= x){
            sieve[u] = x;
        }
    }
    return sieve;
}

int modpow(int x, int n, int m) {
    if (n == 0) return 1%m;
    long long u = modpow(x,n/2,m);
    u = (u*u)%m;
    if (n%2 == 1) u = (u*x)%m;
    return u;
}