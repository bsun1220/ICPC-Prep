#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
#define ll                    long long int
using namespace std;

int main(){
    ll a; cin >> a;
    ll b; cin >> b; 
    ll adiv [6] = {0, 0, 0, 0, 0, 0};
    ll bdiv [6] = {0, 0, 0, 0, 0, 0};
    ll a_r = a;
    ll b_r = b; 

    int divide[3] = {2,3,5};
    for( int s : divide){
        while(a_r % s == 0){
            adiv[s]++;
            a_r/=s;
        }
        while(b_r % s == 0){
            bdiv[s]++;
            b_r/=s;
        }
    }


    if (b_r != a_r){
        cout << -1 << endl; 
    }
    else {
        ll total = abs(adiv[2] - bdiv[2]) + abs(adiv[3] - bdiv[3]) +abs(adiv[5] - bdiv[5]);
        cout << total << endl;
    }


}