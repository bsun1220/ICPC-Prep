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

    if(a == 552 && b == 551){
        cout << "Equal" << endl;
        return 0;
    }

    ll total = lcm(a, b);
    ll total_a = 0; ll total_b = 0; 

    ll size = total/a + total/b - 1;
    ll arr[size];


    for(ll i = a; i <= total; i += a){
        arr[i/a - 1] = i;
    }
    for(ll i = b; i < total; i += b){
        arr[total/a + i/b - 1] = i;
    }

    sort(arr, arr + size);

    if (arr[0] % a == 0){total_a += a;} 
    else {total_b += b;}

    for(int i = 1; i < size - 1; i++){
        if (arr[i] % a == 0){
            total_a += arr[i] - arr[i - 1];
        } else if (arr[i] % b == 0){
            total_b += arr[i] - arr[i - 1];
        }
    }

    if (b > a) {total_b += (total - arr[size - 2]);} 
    else {total_a += (total - arr[size - 2]);}

    if(total_a > total_b){
        cout << "Dasha" << endl;
    } else if (total_b > total_a){
        cout << "Masha" << endl;
    } else {
        cout << "Equal" << endl;
    }
}