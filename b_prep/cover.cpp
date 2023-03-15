#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
#include <cmath>
#define ll                    long long int
using namespace std;

int main(){
    int v1; cin >> v1;
    int v2; cin >> v2;
    int t; cin >> t;
    int d; cin >> d;

    int total = v1 + v2;
    int i = 1;

    while(i <= t -2){
        total += min(v1 + i * d, v2 + (t - 1 - i)*d );
        i++;
    }

    cout << total << endl;
}