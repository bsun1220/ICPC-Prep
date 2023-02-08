#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <string>
#include <cmath>
#include <queue>
#define ll                    long long int
using namespace std;

ll gcd(ll a, ll b){
    if (b == 0){
        return a;
    }
    return gcd(b, a%b);
}

ll lcm(ll a, ll b){
    return (a / gcd(a,b)) * b; 
}

int main (){
    ll a; cin >> a;
    ll b; cin >> b; 

    ll total = lcm(a, b);
    ll total_a = 0; ll total_b = 0; 

    ll iter_a = a; ll iter_b = b; 

    ll prev = 0;
    while (true){
        bool end1 = iter_a == total && prev + b == total;
        bool end2 = iter_b == total && prev + a == total;
        if (end1 || end2){
            if (a < b){
                total_b += total - prev;
            } else {
                total_a += total - prev; 
            }
            break;
        }
        else if (iter_a < iter_b){
            total_a += iter_a - prev;
            prev = iter_a; 
            iter_a += a;
        } else {
            total_b += iter_b - prev;
            prev = iter_b;
            iter_b += b;
            
        }

    }

    if(total_a > total_b){
        cout << "Dasha" << endl;
    } else if (total_b > total_a){
        cout << "Masha" << endl;
    } else {
        cout << "Equal" << endl;
    }
}