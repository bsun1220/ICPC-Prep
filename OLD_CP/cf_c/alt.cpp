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
    int q; cin >> q;
    while(q--){
        int n; cin >> n; 
        bool is_neg;
        ll large_num;
        ll total = 0;
        if (n == 1){
            ll val; cin >> val; 
            cout << val << endl;
            continue; 
        }

        for(int i = 0; i < n; i++){
            ll val; cin >> val; 
            if(i == 0){
                is_neg = val < 0; 
                large_num = val; 
            }
            else if (i == n - 1){
                if(val < 0 == is_neg){
                    large_num = max(val, large_num);
                    total += large_num;
                } else { 
                    total += large_num + val;
                }
            } else {
                if (val < 0 == is_neg){
                    large_num = max(val, large_num);
                } else {
                    is_neg = val < 0; 
                    total += large_num;
                    large_num = val; 
                }
            }
        }
        cout << total << endl;
    }
}
