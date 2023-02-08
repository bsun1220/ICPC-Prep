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

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int p; cin >> p;

        for(int i = 0; i < n; i++){
            cout << i + 1 << " " << (i + 1)%(n) + 1 << endl; 
        }

        for(int i = 0; i < n; i++){
            cout << i + 1 << " " << (i + 2)%(n) + 1 << endl; 
        }
        int start = 0; int p_k = 2; 
        for(int i = 0; i < p; i++){
            if(start == 0){
                p_k ++;
            }
            cout << start + 1 << " " << (start + p_k)%n + 1 << endl; 
            start = (start + 1) % n; 
        }
    }
}