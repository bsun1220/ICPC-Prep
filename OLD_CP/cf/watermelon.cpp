#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
using namespace std;

void solve(int value){
    if (value%2 || value == 0 || value == 2){
        cout << "NO" << "\n";
    }
    else{
        cout << "YES" << "\n";
    }
}

int main(){
    int x;
    cin >> x;
    solve(x);
}