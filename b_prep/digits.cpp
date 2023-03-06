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
    string input; cin >> input;
    map<char, int> m;

    m['0'] = 0; m['1'] = 1; m['2'] = 2;
    m['3'] = 3; m['4'] = 4; m['5'] = 5;
    m['6'] = 6; m['7'] = 7; m['8'] = 8;
    m['9'] = 9;
    int num_sum = 0;

    while(input.length() > 1){
        int total = 0;
        for(int i = 0; i < input.length(); i++){
            total += m[input[i]];
        }
        input = to_string(total);
        num_sum++;
    }

    cout << num_sum << endl;
}