#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int test = 0; test < t; test++){
        long length;
        set<long> s; 
        cin >> length;
        for(long i = 0; i < length; i++){
            long val;
            cin >> val;
            s.insert(val);
        }
        cout << s.size() << endl;
    }
}