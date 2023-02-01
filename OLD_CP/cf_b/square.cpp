#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
using namespace std;

int main(){
    int test; cin >> test;
    for(int t = 0; t < test; t++){
        int a1, a2; cin >> a1; cin >> a2; 
        int b1, b2; cin >> b1; cin >> b2; 
        if(a1 == b1 && b2 + a2 == b1){
            cout << "YES" << endl; 
        } else if (a2 == b2 && b1 + a1 == b2){
            cout << "YES" << endl; 
        } else if (a1 == b2 && a2 + b1 == a1){
            cout << "YES" << endl;
        } else if (a2 == b1 && a1 + b2 == a2){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    }

}