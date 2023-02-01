#include <iostream>
#define ll                    long long int

using namespace std;
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));

int main(){
    fastread();
    ll length; cin >> length;
    ll max_val = 0; 
    for(ll i = 0; i < length; i++){
        ll val; cin >> val; 
        ll prop = max_val + val;
        max_val = max(prop, max_val); 
        cout << prop << " ";
    }
    cout << endl; 
}