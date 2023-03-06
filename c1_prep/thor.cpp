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
    int n; cin >> n; 
    int q; cin >> q; 

    set<int> s [n + 1];
    int curr = 1; 
    set<pair<int, int>> unread;
    for (int i = 0; i < q; i++){
        int type; cin >> type; 
        int x; cin >> x;
        if(type == 1){
            s[x].insert(curr); 
            unread.insert({curr, x});
            curr++;
        } else if (type == 2){
            for(int val : s[x]){
                unread.erase({val, x});
            }
            s[x].clear();
        } else {
            while(unread.size()){
                auto ptr = unread.begin();
                pair<int, int> temp = *ptr; 
                if(temp.first <= x){
                    unread.erase(ptr);
                    s[temp.second].erase(temp.first);
                } else { 
                    break;
                }
            }
        }
        cout << unread.size() << endl;

    }
}