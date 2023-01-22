#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int test = 0; test < t; test++){
        string seq; 
        cin >> seq;
        int length = seq.length();
        int start = -1; 
        int max_jump = 0;
        for(int i = 0; i < seq.length(); i++){
            char c = seq.at(i);
            if(c == 'R'){
                max_jump = max(i - start, max_jump); 
                start = i; 
            }
        }
        max_jump = max(length - start, max_jump);
        cout << max_jump << endl;
    }
}