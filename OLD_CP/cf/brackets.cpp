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
    for(int i = 0; i < t; i++){
        int n;
        string s;
        cin >> n;
        cin >> s;
        int open = 0, close = 0, ans = 0;
        for(int k = 0; k < n; k++){
            if(s[k] == '('){
                open++;
            }
            if(s[k] == ')'){
                close++;
                if(close > open){
                    ans++;
                    close--;
                }
            }

        }
        cout << ans << endl;
    }
}