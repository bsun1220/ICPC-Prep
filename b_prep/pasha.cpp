#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <string>
#include <queue>
#include <cmath>
#define ll                    long long int
using namespace std;

int main(){
    string n; cin >> n;
    int k; cin >> k;

    map<char, int> m = {{'0', 0}, {'1', 1}, {'2', 2}, {'3', 3}, 
                    {'4', 4}, {'5', 5}, {'6', 6}, {'7', 7}, {'8', 8}, {'9',9}};
    
    int start = 0;
    int ind = 0;
    while (ind < k){
        if (start >= n.length() - 1){break;}
        int val1 = m[n[start]];
        int val2 = m[n[start + 1]];
        if (val2 > val1){
            char temp = n[start + 1];
            n[start + 1] = n[start];
            n[start] = temp;
            if (start != 0){
                start -= 2;
            }
            ind++;
        }
        start++; 
    }
    cout << n << endl;

}