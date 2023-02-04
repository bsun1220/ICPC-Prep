#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <string>
#include <algorithm>
#include <queue>
#define ll                    long int
using namespace std;

map<string, ll> find_count(string s){
    map<string, ll> m; 
    for(ll i = 0; i < s.size(); i++){
        string c = s.substr(i, i+1);
        cout << c << endl;
        m[c]++;
    }
    return m;
}

int main(){
    string s; cin >> s;
    string t; cin >> t;
    map<string, ll> m_s = find_count(s);
    map<string, ll> m_t = find_count(s);

    ll total1 = 0; ll total2 = 0;
    for (auto &s : m_t){
        string val = s.first; 
        if(m_s.count(val) != 0){
            ll value = min(m_s[val], m_t[val]);
            total1 += value;
            m_s[val] -= value; 
        }
    }
    for (auto &s : m_t){
        string val = s.first; 
        ll amount = m_t[val];
        for (auto & c: val) c = toupper(c);

        if(m_s.count(val) != 0){
            ll value = min(amount, m_s[val]);
            total2 += value;
            continue;
        } 

        for (auto & c: val) c = tolower(c);
        
        if(m_s.count(val) != 0){
            ll value = min(amount, m_s[val]);
            total2 += value;
        }
    }

    cout << total1 << " " << total2 << endl;


}