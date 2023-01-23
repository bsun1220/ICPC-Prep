#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
using namespace std;

int main(){
    int q; cin >> q; 
    while(q--){
        int length; cin >> length;
        map<int, int> m; 
        for(int i = 0; i < length; i++){
            int val; cin >> val;
            m[val]++;
        }
        int maxi = 0; 
        for(int i = 1; i <= 2 * length; i++){
            int total = 0; 
            for(auto j : m){
                int other = i - j.first; 
                if(other >= 1 && m.count(other) != 0){
                    total += min(j.second, m[other]);
                }
            }
            total /= 2; 
            maxi = max(maxi, total);
        }
        cout << maxi << endl;
    }
}