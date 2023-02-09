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
    ll p; cin >> p;
    ll d; cin >> d; 

    if (d == 0){
        cout << p << endl;
        return 0;
    }

    ll highest = p;
    ll iter = 10; 
    while((p % iter) + 1 <= d){
        highest = p - ((p % iter) + 1);
        iter *= 10;
    }

    cout << highest << endl;

}