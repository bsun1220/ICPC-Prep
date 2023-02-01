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

        int max_length = 1; 
        int l; cin >> l;
        for(int i = 0; i < l ; i ++){
            int val; cin >> val; 
            if(val <= prev){
                val = prev; 
                max_length = max(max_length, i - prev + 1);
            }
        }
    }
}