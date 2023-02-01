#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <deque>

using namespace std;

int main(){

    vector <int> g1;
    for (int i = 0; i <= 5; i++){
        g1.push_back(i * 2);
    }
    for (auto i = g1.begin(); i != g1.end(); i++){
        cout << *i << " ";
    }

    set<int> s;
    s.insert(0);
    s.insert(1);
    s.insert(2);

    for (auto x : s){
        cout << x << "\n";
    }

    map<string, int> m;
    m["monkey"] = 1;
    m["banana"] = 2;
    cout << m["monkey"] << "\n";

    deque<int> d;
    d.push_back(1);
    d.push_front(3);

    return 1;
}