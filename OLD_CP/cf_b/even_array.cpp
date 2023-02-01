#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
using namespace std;

int main(){
    int test;
    cin >> test;
    for(int k = 0; k < test; k++){
        int length;
        cin >> length;
        int num_odds = 0, num_evens = 0; 
        for(int i = 0; i < length; i++){
            int val;
            cin >> val; 
            if(val % 2 != i % 2){
                if(i % 2 == 0){
                    num_odds ++;
                }
                else{
                    num_evens ++;
                }
            }
        }
        if(num_odds != num_evens){
            cout << -1 << endl;
        } else { 
            cout << num_odds << endl;
        }

    }
}