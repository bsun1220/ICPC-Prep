#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
using namespace std;

int main(){
    int length;
    cin >> length;
    set<int>set1;
    set<int>set2; 
    bool found = true;
    for(int i = 0; i < length; i++){
        int val;
        cin >> val;
        if (set1.count(val) == 0){
            set1.insert(val);
        } else if (set2.count(val) == 0){
            set2.insert(val); 
        } else { 
            cout << "NO" << endl;
            found = false;
            break;
        }
    }
    if (found){
        cout << "YES" << endl;
        cout << set1.size() << endl;
        for(auto s : set1){
            cout << s << " ";
        }
        cout << endl;

        set<int>::reverse_iterator rit;

        cout << set2.size() << endl;
        for(rit = set2.rbegin(); rit != set2.rend(); rit++){
            cout << *rit << " ";
        }
        cout << endl;
    }
}