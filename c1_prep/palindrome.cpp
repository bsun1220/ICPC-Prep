#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <cstring>
#include <cmath>
#include <queue>
#define ll                    long long int
#define inf 1000000000000000
using namespace std;

int letter_dist(char a, char b){
    return min(abs(int(a) - int(b)), 26 - abs(int(a) - int(b)));
}

int main(){
    int n; cin >> n;
    int p; cin >> p;
    char word[n];
    for(int i = 0; i < n; i++){
        cin >> word[i];
    }
    int pos = p - 1;

    int total = 0; 
    int min_val = pos; 
    int max_val = pos; 
    for(int i = 0; i < floor(n/2); i++){
        char first = word[i];
        char second = word[n - 1 - i];
        int amount = letter_dist(first, second);
        total += amount; 
        if (amount != 0){
            int check = pos < floor(n/2) ? i : n - 1 - i;
            min_val = min(min_val, check);
            max_val = max(max_val, check);
        }
    }
    total += min(pos + max_val - 2 * min_val, 2 * max_val - pos - min_val);
    cout << total << endl;
        
}