#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
using namespace std;

int main(){
    set<char> s; 
    string val;
    cin >> val;
    for (int i = 0; i < val.length(); i++){
        char c = val.at(i);
        s.insert(c);
    }
    if (s.size()%2 == 0){
        cout << "CHAT WITH HER!\n";
    }
    else{
        cout << "IGNORE HIM!\n";
    }
}