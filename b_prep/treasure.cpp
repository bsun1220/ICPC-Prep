#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
#include <cmath>
#define ll                    long long int
using namespace std;

int main(){
    int n; cin >> n;
    string kuro; cin >> kuro;
    string shiro; cin >> shiro;
    string katie; cin >> katie;
    
    int map1[256] = {0};
    int map2[256] = {0};
    int map3[256] = {0}; 
    int ma = 0 ;
    int mb = 0;
    int mc = 0;

    for (char c : kuro) ma = max(ma, ++map1[c]);
    for (char c : shiro) mb = max(mb, ++map2[c]);
    for (char c : katie) mc = max(mc, ++map3[c]);

    if (n == 1 && ma == (int)kuro.length()) kuro.pop_back();
    if (n == 1 && mb == (int)shiro.length()) shiro.pop_back();
    if (n == 1 && mc == (int)katie.length()) katie.pop_back();
    
    ma = min(ma + n, (int)kuro.length());
    mb = min(mb + n, (int)shiro.length());
    mc = min(mc + n, (int)katie.length());

    if (ma > mb && ma > mc) cout << "Kuro" << endl;
    else if (mb > ma && mb > mc) cout << "Shiro" << endl;
    else if (mc > mb && mc > ma) cout << "Katie" << endl;
    else cout << "Draw" << endl;
    
}