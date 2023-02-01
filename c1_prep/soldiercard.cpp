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
    int n; cin >> n;
    int k1; cin >> k1;
    queue<int>og1; 
    queue<int>q1;
    while(k1--){
        int val; cin >> val; 
        og1.push(val);
        q1.push(val);
    }

    int k2; cin >> k2;
    queue<int>og2; 
    queue<int>q2;
    while(k2--){
        int val; cin >> val; 
        og2.push(val);
        q2.push(val);
    }
    ll total_vic = 0; 
    while(total_vic < 1000000){
        if(q1.size() == 0){
            cout << total_vic << " " << 2 << endl;
            return 0;
        } else if (q2.size() == 0){
            cout << total_vic << " " << 1 << endl;
            return 0;
        }
        total_vic++;
        int val1 = q1.front();
        int val2 = q2.front();
        q1.pop();
        q2.pop();
        if(val1 > val2){
            q1.push(val2);
            q1.push(val1);
        } else {
            q2.push(val1);
            q2.push(val2);
        }

        if (q1 == og1 && q2 == og2){
            cout << -1 << endl;
            return 0;
        }

    }
    cout << -1 << endl;

}